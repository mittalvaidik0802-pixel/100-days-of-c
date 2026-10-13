#include <stdio.h>

int main() {
    char a[200], b[200];
    int freq[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    for (i = 0; a[i] != '\0' && a[i] != '\n'; i++)
        freq[(unsigned char)a[i]]++;

    for (i = 0; b[i] != '\0' && b[i] != '\n'; i++)
        freq[(unsigned char)b[i]]--;

    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Strings are anagrams.");
    else
        printf("Strings are not anagrams.");

    return 0;
}