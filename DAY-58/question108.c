#include <stdio.h>

int main() {
    int a[100], answer[100];
    int n, i, j, product;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        product = 1;

        for (j = 0; j < n; j++) {
            if (i != j)
                product *= a[j];
        }

        answer[i] = product;
    }

    printf("Result: ");
    for (i = 0; i < n; i++)
        printf("%d ", answer[i]);

    return 0;
}