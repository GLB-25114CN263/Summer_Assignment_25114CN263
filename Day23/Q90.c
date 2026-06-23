#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                printf("First Repeating Character = %c", str[i]);
                found = 1;
                break;
            }
        }

        if(found)
            break;
    }

    if(!found)
        printf("No Repeating Character Found");

    return 0;
}