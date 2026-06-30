#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[10];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < n; i++) {
        printf("Employee ID: %d\n", e[i].id);
        printf("Employee Name: %s\n", e[i].name);
        printf("Salary: %.2f\n\n", e[i].salary);
    }

    return 0;
}