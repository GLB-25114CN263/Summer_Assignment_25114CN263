#include <stdio.h>

struct Book {
    int id;
    char title[50];
};

int main() {
    struct Book b[10];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEnter Book ID: ");
        scanf("%d", &b[i].id);

        printf("Enter Book Title: ");
        scanf("%s", b[i].title);
    }

    printf("\n----- Library Records -----\n");

    for(i = 0; i < n; i++) {
        printf("Book ID: %d\n", b[i].id);
        printf("Book Title: %s\n\n", b[i].title);
    }

    return 0;
}