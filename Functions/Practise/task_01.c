// #include <stdio.h>

// char greet(){
//     printf("Welcome to c.\n");
// }

// int main() {

//     greet();
//     greet();
//     greet();

//     return 0;
// }

// Create a function that accepts two integers and returns their sum.

// #include <stdio.h>

// int add(int a, int b){
//     return a + b;
// }

// int main() {

//     int res = add(3, 2);
//     printf("Result: %d",res);
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

void greet(char name[20], int age){
    printf("Hi, %s what's popin out?\n", name);
    printf("your are %d years old.", age);
}

int main() {

    char name[50] = "";
    int age ;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);
    
    greet(name, age);

    return 0;
}