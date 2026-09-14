#include <stdio.h>

int main() {
    int n, first, last, digits = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find last digit
    last = n % 10;

    // Find first digit and count digits
    while (temp >= 10) {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    // Remove first and last digits, then swap them
    n = n % digits;
    n = n / 10;

    n = last * digits + n * 10 + first;

    printf("After swapping = %d", n);

    return 0;
}