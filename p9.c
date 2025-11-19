//C Program to Compute Student Grade based on total marks and display result (Pass/Fail).
#include <stdio.h>

int main() {
    int marks;

    printf("Enter total marks (out of 100): ");
    scanf("%d", &marks);

    if(marks >= 90)
        printf("Grade: A\nPass\n");
    else if(marks >= 75)
        printf("Grade: B\nPass\n");
    else if(marks >= 50)
        printf("Grade: C\nPass\n");
    else
        printf("Grade: F\nFail\n");

    return 0;
}
