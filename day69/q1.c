#include <stdio.h>

int main() {
    int n, i, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int freq[n];   // frequency tracker
    for (i = 0; i < n; i++) {
        freq[i] = 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        
        if (freq[x] == 1) {   // already seen
            printf("%d\n", x);
            return 0;
        }
        freq[x]++;  // mark as seen
    }

    // In case no repetition found (shouldn't happen per problem guarantee)
    printf("-1\n");
    return 0;
}
