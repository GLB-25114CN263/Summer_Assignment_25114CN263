#include <stdio.h>

int main() {
    long long num;
    long long largestFactor = 0;
    int i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    for(i = 2; i <= num; i++) {
        while(num % i == 0) {
            largestFactor = i;
            num = num / i;
        }
    }

    printf("Largest Prime Factor = %lld", largestFactor);

    return 0;
}