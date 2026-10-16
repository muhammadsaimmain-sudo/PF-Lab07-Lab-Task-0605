#include <stdio.h>
#include <string.h>
int main() {
    char input[50];
    char result[50];
    int i, j = 0;
int count=0;
    printf("Enter numbers: ");
    scanf("%49[^\n]", input);

    for (i = 0; input[i] != '\0'; i++) {
  
      
        if (input[i] != ' ' && input[i] != '-') { //2 //2 "" //1 
            result[j] = input[i];
            j++;
        }
            if(input[i] ==' ' || input[i] =='-'){

    count++;
}


    }



    

    result[j] = '\0';

if(strlen(result)==11){

    printf("VALID NUMBER\n");
}
else{
    printf("PLZ ENRET AGAIN\n");
};


    printf("Result: %s\n", result);
printf("%d\n",count);
    return 0;
}