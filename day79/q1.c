#include <stdio.h>

int main() {
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float avg;

    fp = fopen("numbers.txt", "r"); // open file in read mode

    if (fp == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("File is empty!\n");
        return 0;
    }

    avg = (float) sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
