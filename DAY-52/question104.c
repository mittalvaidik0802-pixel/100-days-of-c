#include <stdio.h>

int main() {
    int n, x;
    long long left, right, total;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    total = (long long)n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        left = (long long)x * (x + 1) / 2;
        right = total - (long long)(x - 1) * x / 2;

        if (left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}