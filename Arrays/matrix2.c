#include <stdio.h>

#define NUM_STUDENTS 3
#define NUM_SUBJECTS 3

int main() {
    // Declare a 2D array to store students' marks
    int marks[NUM_STUDENTS][NUM_SUBJECTS];

    // Input marks for each student and each subject
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter marks for student %d:\n", i + 1);

        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("Enter marks for %s: ", (j == 0) ? "Math" : (j == 1) ? "English" : "Science");
            scanf("%d", &marks[i][j]);
        }
    }

    // Display students' marks and calculate total and average
    printf("\nStudents' Marksheet:\n");
    printf("Student\tMath\tEnglish\tScience\tTotal\tAverage\n");

    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%d\t", i + 1);

        int total = 0;
        for (int j = 0; j < NUM_SUBJECTS; j++) {
            printf("%d\t", marks[i][j]);
            total += marks[i][j];
        }

        float average = (float)total / NUM_SUBJECTS;

        printf("%d\t%.2f\n", total, average);
    }

    return 0;
}

