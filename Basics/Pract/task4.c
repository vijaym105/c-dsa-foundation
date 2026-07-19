
// ==============================
//         STUDENT ID
// ==============================
// Name   : Vijay
// Roll   : 101
// Branch : MCA
// College: ABC College
// ==============================

#include <stdio.h>

int main()
{
    char name[20], branch[20], college[50];
    int roll;

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your Roll no: ");
    scanf("%d", &roll);

    printf("Enter your branch: ");
    scanf("%s", &branch);

    printf("Enter your college name: ");
    scanf("%s", &college);

    
    printf("==============================\n");
    printf("\t  Student");
    printf("\n==============================\n");

    printf("Name\t: %s\nRoll\t: %d\nBranch\t: %s\nCollege\t: %s", name, roll, branch, college);


    return 0;
}