#include <stdio.h>

int main() {

    int temps[] = {31, 33, 35, 34, 38, 36, 32};
    
    
    int length = sizeof(temps) / sizeof(temps[0]);
    
   
    int max_temp, min_temp;
    float sum = 0, average;

    printf("--- INITIAL TEMPERATURE REPORT ---\n");
    // Print initial readings
    for (int i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temps[i]);
    }
    max_temp = temps[0];
    min_temp = temps[0];
    for (int i = 0; i < length; i++) {
        if (temps[i] > max_temp) max_temp = temps[i];
        if (temps[i] < min_temp) min_temp = temps[i];
        sum += temps[i];
    }
    average = sum / length;

    printf("\nInitial Statistics:\n");
    printf("Highest Temperature: %d C\n", max_temp);
    printf("Lowest Temperature:  %d C\n", min_temp);
    printf("Average Temperature: %.2f C\n", average);

  
    printf("\n[System Notice] Correcting sensor fault for Day 3...\n");
    temps[2] = 37; 

   
    sum = 0;
    max_temp = temps[0];
    min_temp = temps[0];

    printf("\n--- REVISED TEMPERATURE REPORT ---\n");
    for (int i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temps[i]);
        if (temps[i] > max_temp) max_temp = temps[i];
        if (temps[i] < min_temp) min_temp = temps[i];
        sum += temps[i];
    }
    average = sum / length;

    printf("\nRevised Statistics:\n");
    printf("Highest Temperature: %d C\n", max_temp);
    printf("Lowest Temperature:  %d C\n", min_temp);
    printf("Average Temperature: %.2f C\n", average);


    printf("\n--- MEMORY ADDRESS ANALYSIS ---\n");
    for (int i = 0; i < length; i++) {
        printf("Element temps[%d] Address: %p\n", i, (void*)&temps[i]);
    }


    return 0;
}
