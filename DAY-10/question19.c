#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        printf("Invalid triangle");
    }
    else if (a == b && b == c) {
        printf("Equilateral triangle");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles triangle");
    }
    else {
        printf("Scalene triangle");
    }

    return 0;
}