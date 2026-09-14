#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digit, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    // Calculate Armstrong sum
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}