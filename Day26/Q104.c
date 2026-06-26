#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ2. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ3. 2 + 2 = ?\n");
    printf("1. 3\n2. 4\n3. 5\n4. 6\n");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}