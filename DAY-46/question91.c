#include <stdio.h>

int main() {
    char str[200];
    int i, j = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u')
            str[j++] = str[i];
    }

    str[j] = '\0';

    printf("String without vowels: %s", str);

    return 0;
}