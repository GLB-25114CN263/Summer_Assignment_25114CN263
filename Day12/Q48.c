#include <stdio.h>

int isPerfect(int num) {
    int i, sum = 0;

    for(i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPerfect(num))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}