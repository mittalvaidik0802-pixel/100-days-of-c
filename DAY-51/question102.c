#include <stdio.h>

int main() {
    int a[100], n, x, i, ans = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (a[i] >= x) {
            ans = i;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}