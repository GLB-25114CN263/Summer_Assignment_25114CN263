#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    struct Book b[5];
    int i, n;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Name: ");
        scanf("%s", b[i].name);
    }

    printf("\n--- Library Records ---\n");

    for(i = 0; i < n; i++) {
        printf("Book ID: %d\n", b[i].id);
        printf("Book Name: %s\n\n", b[i].name);
    }

    return 0;
}