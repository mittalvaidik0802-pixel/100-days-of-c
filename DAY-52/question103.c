#include <stdio.h>

int main() {
    int a[100], n, i, pivot = -1;
    int leftSum = 0, total = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        total += a[i];
    }

    for (i = 0; i < n; i++) {
        total -= a[i];

        if (leftSum == total) {
            pivot = i;
            break;
        }

        leftSum += a[i];
    }

    printf("%d", pivot);

    return 0;
}