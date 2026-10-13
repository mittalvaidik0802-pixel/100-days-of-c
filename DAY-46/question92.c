#include <stdio.h>

int main() {
    char str[200];
    int i, found = 0;
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] == 1) {
                printf("First repeating character = %c", str[i]);
                found = 1;
                break;
            }
            freq[str[i] - 'a']++;
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet found.");

    return 0;
}