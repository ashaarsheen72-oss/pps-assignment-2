#include <stdio.h>

int main() {
    int i, n = 5;
    float marks, total = 0, percentage;
    char grade;

    for (i = 1; i <= n; i++) {
        printf("Enter marks of subject %d: ", i);
        scanf("%f", &marks);
        total += marks;
    }

    percentage = total / n;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("\nTotal marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    if (grade == 'F')
        printf("Result: Fail\n");
    else
        printf("Result: Pass\n");

    return 0;
}