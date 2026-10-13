#include <stdio.h>

int main() {
    char a[200], b[200], temp[400];
    int i, j, len1 = 0, len2 = 0, found = 0;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    while (a[len1] != '\0' && a[len1] != '\n')
        len1++;

    while (b[len2] != '\0' && b[len2] != '\n')
        len2++;

    if (len1 == len2) {
        for (i = 0; i < len1; i++)
            temp[i] = a[i];

        for (i = 0; i < len1; i++)
            temp[len1 + i] = a[i];

        temp[2 * len1] = '\0';

        for (i = 0; i <= len1; i++) {
            for (j = 0; j < len2; j++) {
                if (temp[i + j] != b[j])
                    break;
            }

            if (j == len2) {
                found = 1;
                break;
            }
        }
    }

    if (found)
        printf("Strings are rotations.");
    else
        printf("Strings are not rotations.");

    return 0;
}