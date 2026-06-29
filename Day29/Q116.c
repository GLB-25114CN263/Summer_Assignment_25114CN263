#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
};

int main() {
    struct Item item[10];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);
    }

    printf("\n--- Inventory Details ---\n");

    for(i = 0; i < n; i++) {
        printf("\nItem ID: %d\n", item[i].id);
        printf("Item Name: %s\n", item[i].name);
        printf("Quantity: %d\n", item[i].quantity);
    }

    return 0;
}