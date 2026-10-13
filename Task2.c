#include <stdio.h>

int main() {
  
    float marks[10];
    int total_students = 10;
    float class_sum = 0, class_average = 0;
    int above_average_count = 0;


    printf("--- MARKS ENTRY SYSTEM ---\n");
    for (int i = 0; i < total_students; i++) {
        while (1) {
            printf("Enter marks for student %d (out of 20): ", i + 1);
            scanf("%f", &marks[i]);

            // Validation check
            if (marks[i] >= 0.0f && marks[i] <= 20.0f) {
                break; // Valid input, exit validation loop
            }
            printf("Invalid input! Marks must be between 0 and 20. Please re-enter.\n");
        }
        class_sum += marks[i];
    }

  
    class_average = class_sum / total_students;

    // Display initial report with conditional remarks
    printf("\n--- INITIAL GRADE REPORT ---\n");
    for (int i = 0; i < total_students; i++) {
        printf("Student %d: %.2f / 20 -> Remark: ", i + 1, marks[i]);
        if (marks[i] >= 18.0) {
            printf("Excellent\n");
        } else if (marks[i] >= 14.0) {
            printf("Good\n");
        } else if (marks[i] >= 10.0) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }
    }
    printf("\nClass Average: %.2f\n", class_average);

    // Count students above initial average
    for (int i = 0; i < total_students; i++) {
        if (marks[i] > class_average) {
            above_average_count++;
        }
    }
    printf("Number of students scoring above average: %d\n", above_average_count);

    
    printf("\n[System Notice] Applying 1.5 bonus marks adjustment (Capped at 20)...\n");
    class_sum = 0; // Reset sum for revised average
    for (int i = 0; i < total_students; i++) {
        marks[i] += 1.5f;
        if (marks[i] > 20.0f) {
            marks[i] = 20.0f; // Cap at 20
        }
        class_sum += marks[i];
    }

  
    class_average = class_sum / total_students;

    printf("\n--- REVISED GRADE REPORT (WITH BONUS) ---\n");
    for (int i = 0; i < total_students; i++) {
        printf("Student %d: %.2f / 20 -> Remark: ", i + 1, marks[i]);
        if (marks[i] >= 18.0) {
            printf("Excellent\n");
        } else if (marks[i] >= 14.0) {
            printf("Good\n");
        } else if (marks[i] >= 10.0) {
            printf("Average\n");
        } else {
            printf("Needs Improvement\n");
        }
    }
    printf("\nNew Class Average: %.2f\n", class_average);

    return 0;
}
