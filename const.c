#include <stdio.h>
#include <string.h>

// Function to replace spaces with dashes in a string
void sp_to_dash(char *str) {
    while (*str) {
        if (*str == ' ') {
            *str = '-';
        }
        str++;
    }
}

int main() {
    char myString[100];

    printf("Enter a string with spaces: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove newline character if present
    if (myString[strlen(myString) - 1] == '\n') {
        myString[strlen(myString) - 1] = '\0';
    }

    // Convert spaces to dashes
    sp_to_dash(myString);

    printf("String with spaces replaced by dashes: %s\n", myString);

    return 0;
}
