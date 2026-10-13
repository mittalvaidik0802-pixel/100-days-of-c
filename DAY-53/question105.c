#include <stdio.h>

int main() {
    int a[100], n, i, j, count, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > n / 2) {
            printf("%d", a[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("-1");

    return 0;
}#include <stdio.h>

int main() {
    int a[100], n, i, j, count, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > n / 2) {
            printf("%d", a[i]);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("-1");

    return 0;
}