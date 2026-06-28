#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, total, percentage;

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3;

    printf("\n----- Marksheet -----\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("Division: First");
    else if (percentage >= 45)
        printf("Division: Second");
    else
        printf("Division: Third");

    return 0;
}