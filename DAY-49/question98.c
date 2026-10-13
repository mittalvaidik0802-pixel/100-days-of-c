#include <stdio.h>

int main() {
    char name[100];
    int i, start = 0, last = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            last = i;
        }
    }

    for (i = 0; i < last; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
            printf("%c. ", name[i]);
    }

    while (name[last] == ' ')
        last++;

    printf("%s", name + last);

    return 0;
}