#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    // extract day, month, year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // print in new format
    printf("%02d-%s-%d\n", day, months[month - 1], year);

    return 0;
}
