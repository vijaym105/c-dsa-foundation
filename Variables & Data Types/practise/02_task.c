// Build a Student Record program.

// Input:
// Name (single word is fine for now)
// Roll Number
// Age
// Grade
// CGPA

// Display everything in a clean table.

#include <stdio.h>

int main() {
    char n1[20], n2[20], grade, grade1;
    int roll_no, roll_no1, age, age1;
    float cgpa,cgpa1;

    printf("Enter name of student: ");
    scanf("%s", n1);

    printf("Enter Roll no: ");
    scanf("%d", &roll_no);

    printf("Enter age:");
    scanf("%d", &age);

    printf("grades: ");
    scanf(" %c", &grade);

    printf("enter cgpa: ");
    scanf("%f", &cgpa);


    printf("\t****  Student Record  ****\n");
    printf("\tName \tRoll \tAge \tGrades \tCGPA \n\n\t%s \t%d \t%d \t%c \t%.2f" , n1, roll_no, age, grade, cgpa);

    

    return 0;
}