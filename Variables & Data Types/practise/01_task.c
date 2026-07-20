// Take an integer as input and print it.

// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter a integer: ");
//     scanf("%d", &n);

//     printf("Integer: %d", n);

//     return 0;
// }

// Take age and CGPA as input and display

#include <stdio.h>

int main() {
    
    int age;
    float cgpa;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter cgpa: ");
    scanf("%f", &cgpa);

    printf("Your age is %d\n CGPA is %.2f", age, cgpa);
    return 0;
}