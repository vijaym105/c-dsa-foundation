// Create a calculator using functions.

// Functions: add()
// subtract()
// multiply()
// divide()

// Use switch in main() to call the correct function.

#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int division(int a, int b){
    return a / b;
}

int main(){
    int num1, num2, res;
    char name;

    printf("choose the operation: ");
    scanf("%c", &name);

    printf("Enter two operands: ");
    scanf("%d %d", &num1, &num2);

    switch (name)
    {
    case '+' :
        res = add(num1, num2);
        printf("Addition: %d", res);
        break;
    case '-':
        res = sub(num1, num2);
        printf("Substraction: %d", res);
        break;
    case '*':
        res = mul(num1, num2);
        printf("Multiplication: %d", res);
        break;
    case '/':
        res = division(num1, num2);
        printf("Division: %d", res);
        break;
    default:
        printf("choice valid operation,");
        break;
    }
}