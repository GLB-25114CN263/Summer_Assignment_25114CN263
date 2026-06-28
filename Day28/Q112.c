#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[5];
    int i, n;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Name: ");
        scanf("%s", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%s", c[i].phone);
    }

    printf("\n--- Contact List ---\n");

    for(i = 0; i < n; i++) {
        printf("Name: %s\n", c[i].name);
        printf("Phone: %s\n\n", c[i].phone);
    }

    return 0;
}