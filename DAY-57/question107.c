#include <stdio.h>

int main() {
    int a[100], n, i, j, prev;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        prev = -1;

        for (j = i - 1; j >= 0; j--) {
            if (a[j] > a[i]) {
                prev = a[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", prev);
    }

    return 0;
}