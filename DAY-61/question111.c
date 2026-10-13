#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, found;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k");
        return 0;
    }

    for (i = 0; i <= n - k; i++) {
        found = 0;

        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0)
            printf("0 ");
    }

    return 0;
}