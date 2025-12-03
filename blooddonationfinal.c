#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_DONORS 100
#define FILE_NAME "donors.dat"

typedef struct {
    int id, age;
    char name[50], bloodGroup[5], contact[15];
    int d, m, y; /* last donation date */
} Donor;

Donor donors[MAX_DONORS];
int donorCount = 0;

void loadFromFile(), saveToFile(), clearInputBuffer();
void registerDonor(), displayAllDonors(), searchByBloodGroup();
void checkEligibility(), viewDonorDetails();

int daysBetween(int d1,int m1,int y1,int d2,int m2,int y2){
    struct tm t1 = {0}, t2 = {0};
    t1.tm_mday = d1; t1.tm_mon = m1 - 1; t1.tm_year = y1 - 1900;
    t2.tm_mday = d2; t2.tm_mon = m2 - 1; t2.tm_year = y2 - 1900;
    time_t time1 = mktime(&t1), time2 = mktime(&t2);
    return (int)((time2 - time1) / (60 * 60 * 24));
}

void menu(){
    printf("\n---- BLOOD DONATION MANAGEMENT ----\n");
    printf("1. Register New Donor\n");
    printf("2. Display All Donors\n");
    printf("3. Search by Blood Group\n");
    printf("4. Check Donor Eligibility\n");
    printf("5. View Donor Details\n");
    printf("6. Save and Exit\n");
    printf("-----------------------------------\n");
}

int main(){
    int choice;
    loadFromFile();
    if(donorCount) printf("\nLoaded %d donor(s).\n", donorCount);

    while(1){
        menu();
        printf("Enter choice: ");
        if (scanf("%d",&choice) != 1){ clearInputBuffer(); continue; }
        clearInputBuffer();

        switch(choice){
            case 1: registerDonor(); break;
            case 2: displayAllDonors(); break;
            case 3: searchByBloodGroup(); break;
            case 4: checkEligibility(); break;
            case 5: viewDonorDetails(); break;
            case 6: saveToFile(); printf("Data saved. Bye!\n"); return 0;
            default: printf("Invalid choice.\n");
        }
    }
}

void registerDonor(){
    if(donorCount >= MAX_DONORS){ printf("Database full.\n"); return; }

    Donor d; d.id = donorCount + 1;
    printf("Name: "); fgets(d.name, sizeof d.name, stdin);
    d.name[strcspn(d.name, "\n")] = 0;

    printf("Age: "); scanf("%d", &d.age); clearInputBuffer();
    if(d.age < 18 || d.age > 65){ printf("Age must be 18-65.\n"); return; }

    printf("Blood Group (A+,B+,O-,...): ");
    fgets(d.bloodGroup, sizeof d.bloodGroup, stdin);
    d.bloodGroup[strcspn(d.bloodGroup, "\n")] = 0;

    printf("Contact: ");
    fgets(d.contact, sizeof d.contact, stdin);
    d.contact[strcspn(d.contact, "\n")] = 0;

    printf("Last Donation Date (DD MM YYYY): ");
    scanf("%d %d %d", &d.d, &d.m, &d.y); clearInputBuffer();
    if(d.m < 1 || d.m > 12 || d.d < 1 || d.d > 31){ printf("Invalid date.\n"); return; }

    donors[donorCount++] = d;
    printf("Donor registered. ID = %d\n", d.id);
}

void displayAllDonors(){
    if(!donorCount){ printf("No donors yet.\n"); return; }

    printf("\n%-3s %-20s %-3s %-5s %-12s %-10s\n",
           "ID","Name","Age","BG","Contact","LastDon");
    for(int i = 0; i < donorCount; i++)
        printf("%-3d %-20s %-3d %-5s %-12s %02d/%02d/%04d\n",
               donors[i].id, donors[i].name, donors[i].age,
               donors[i].bloodGroup, donors[i].contact,
               donors[i].d, donors[i].m, donors[i].y);
}

void searchByBloodGroup(){
    if(!donorCount){ printf("No donors yet.\n"); return; }

    char bg[5]; int found = 0;
    printf("Enter Blood Group to search: ");
    fgets(bg, sizeof bg, stdin);
    bg[strcspn(bg, "\n")] = 0;

    printf("\nDonors with blood group %s:\n", bg);
    printf("%-3s %-20s %-3s %-12s %-10s\n",
           "ID","Name","Age","Contact","LastDon");

    for(int i = 0; i < donorCount; i++)
        if(strcmp(donors[i].bloodGroup, bg) == 0){
            printf("%-3d %-20s %-3d %-12s %02d/%02d/%04d\n",
                   donors[i].id, donors[i].name, donors[i].age,
                   donors[i].contact, donors[i].d, donors[i].m, donors[i].y);
            found++;
        }

    if(!found) printf("No donors found.\n");
}

void checkEligibility(){
    if(!donorCount){ printf("No donors yet.\n"); return; }

    time_t t = time(NULL); struct tm *now = localtime(&t);
    int cd = now->tm_mday, cm = now->tm_mon + 1, cy = now->tm_year + 1900;

    printf("\nEligibility (as of %02d/%02d/%04d):\n", cd, cm, cy);
    printf("%-3s %-20s %-5s %-10s %-12s\n",
           "ID","Name","BG","DaysSince","Status");

    for(int i = 0; i < donorCount; i++){
        int days = daysBetween(donors[i].d, donors[i].m, donors[i].y, cd, cm, cy);
        printf("%-3d %-20s %-5s %-10d %-12s\n",
               donors[i].id, donors[i].name, donors[i].bloodGroup,
               days, days >= 90 ? "ELIGIBLE" : "NOT ELIGIBLE");
    }
}

void viewDonorDetails(){
    if(!donorCount){ printf("No donors yet.\n"); return; }

    int id;
    printf("Enter Donor ID: ");
    scanf("%d", &id); clearInputBuffer();

    for(int i = 0; i < donorCount; i++)
        if(donors[i].id == id){
            printf("\nID: %d\nName: %s\nAge: %d\nBlood: %s\nContact: %s\nLast Donation: %02d/%02d/%04d\n",
                   donors[i].id, donors[i].name, donors[i].age,
                   donors[i].bloodGroup, donors[i].contact,
                   donors[i].d, donors[i].m, donors[i].y);
            return;
        }
    printf("Donor not found.\n");
}

void saveToFile(){
    FILE *f = fopen(FILE_NAME,"wb");
    if(!f){ printf("Error saving file.\n"); return; }
    fwrite(&donorCount, sizeof donorCount, 1, f);
    fwrite(donors, sizeof(Donor), donorCount, f);
    fclose(f);
}

void loadFromFile(){
    FILE *f = fopen(FILE_NAME,"rb");
    if(!f) return;
    fread(&donorCount, sizeof donorCount, 1, f);
    fread(donors, sizeof(Donor), donorCount, f);
    fclose(f);
}

void clearInputBuffer(){
    int c; while((c = getchar()) != '\n' && c != EOF);
}
