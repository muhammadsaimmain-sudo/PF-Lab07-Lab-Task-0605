#include <stdio.h>

int main() {
  
    char name[20];
    int count = 0;

    printf("Enter a display name: ");
    
   
    scanf("%[A-Za-z]", name);

    
    if (name[0] >= 'a' && name[0] <= 'z') {
        name[0] = name[0] - ('a' - 'A'); // Subtracts 32 to convert to uppercase
    }

   
    while (name[count] != '\0') {
        printf("Character at index %d: %c\n", count, name[count]);
        count++;
    }


    printf("\nFinal Name: %s\n", name);
    printf("Total characters stored: %d\n", count);

    return 0;
}