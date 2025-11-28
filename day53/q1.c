#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int totalSum = 0, leftSum = 0;

    // Calculate total sum of array
    for (i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    // Traverse and check pivot condition
    for (i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1\n");
    return 0;
}


    //
