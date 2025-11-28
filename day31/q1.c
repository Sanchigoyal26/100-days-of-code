#include <stdio.h>

int main() {
    int n, i, key, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;   // store index where found
            break;
        }
    }

    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n"); // not found

    return 0;
}
