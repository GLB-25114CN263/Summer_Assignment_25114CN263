#include <stdio.h>

int main() {
    int x, n, result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    printf("%d^%d = %d", x, n, result);

    return 0;
}