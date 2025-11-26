#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin); // Read user input including spaces

    printf("You entered: %s", name); // Print back to the user

    int length = strlen(name) -1; //-1 to remove the newline from fgets
    printf("Length of the string is: %d\n", length);

    return 0;
}

