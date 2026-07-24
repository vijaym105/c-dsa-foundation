// Create a function that returns the factorial of a number.
// #include <stdio.h>

// int factorial(int n){
//     int num = 1;

//     if(n <= 0){
//        return printf("Error: Number should be greater that 0 or 1");
//     }

//     for(int i = 1; i <= n; i++){
//         num *= i;
//     }

//     return num;
// }
// int main() {

//     int num;
    
//     printf("Enter number: ");
//     scanf(" %d", &num);

//     int res = factorial(num);

//     printf("Result: %d", res);

//     return 0;
// }


// Create a function that checks whether a number is even or odd.
// #include <stdio.h>
// #include<stdbool.h>

// bool everOddChecker(int n){
//     return n % 2 == 0;
// }

// int main(){
//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if(everOddChecker(num)){
//         printf("Given number is even, %d", num);
//     }
//     else{
//         printf("Given number is odd, %d", num);
//     }

//     return 0;
// }


// Create a function that checks whether a number is a palindrome.
#include <stdio.h>

int palindrome(int n){
    int reversed = 0, digit;

    if(n == 0){
        return printf("Enter number greater than 0 (usualy above 10).");
    }

    while(n != 0){
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10; 
    }

    return reversed;

}

int main() {
    int num, res, og;

    printf("Enter a number: ");
    scanf("%d", &num);

    res = palindrome(num);

    if(res == num){
        printf("It is a palindrome. %d reversed: %d", num, res);
    }
    else{
        printf("It is not. og: %d, reversed: %d", num, res);
    }
    
    return 0;
}
