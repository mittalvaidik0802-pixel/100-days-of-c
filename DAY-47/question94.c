#include <stdio.h>

int main() {
    char str[300], word[100], longest[100];
    int i = 0, j, k, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        while (str[i] == ' ')
            i++;

        j = 0;

        while (str[i] != ' ' && str[i] != '\0' &&
               str[i] != '\n') {
            word[j++] = str[i++];
        }

        word[j] = '\0';

        if (j > max) {
            max = j;
            for (k = 0; k <= j; k++)
                longest[k] = word[k];
        }
    }

    if (max > 0)
        printf("Longest word = %s", longest);
    else
        printf("No word found.");

    return 0;
}