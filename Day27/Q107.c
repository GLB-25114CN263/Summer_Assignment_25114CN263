#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary, hra, da, grossSalary;
};

int main() {
    struct Employee e;
    float hraPercent = 20, daPercent = 10;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basicSalary);

    e.hra = (hraPercent / 100) * e.basicSalary;
    e.da = (daPercent / 100) * e.basicSalary;

    e.grossSalary = e.basicSalary + e.hra + e.da;

    printf("\n----- Salary Details -----\n");
    printf("Employee ID: %d\n", e.id);
    printf("Employee Name: %s\n", e.name);
    printf("Basic Salary: %.2f\n", e.basicSalary);
    printf("HRA: %.2f\n", e.hra);
    printf("DA: %.2f\n", e.da);
    printf("Gross Salary: %.2f\n", e.grossSalary);

    return 0;
}