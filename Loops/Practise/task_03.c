// Code for palondrome number
// Input number
// Store original copy
// Reverse the number
// Compare
// If original == reverse
// Palindrome
// Else
// Not Palindrome

// #include <stdio.h>

// int main() {
//     int num, reversed = 0, digit, og;

//     printf("Enter a numbers: ");
//     scanf("%d", &num);
//     og = num;
//     while (num != 0){
//         digit  = num % 10;
//         reversed = reversed * 10 + digit;
//         num = num / 10;
        
//     }
//     if(reversed == og){
//             printf("Given Number is Palindrome.");
//         }
//         else{
//             printf("Its not palindrome, reversed: %d,   og : %d", reversed, og);
//         }
//     return 0;
// }


// Nested Loops
// Pattern Printing
// *
// **
// ***
// ****
// *****

// #include <stdio.h>

// int main() {
//     for(int i = 1; i <=5; i++){
//         for(int j = 1; j <= i-1; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
// ****
// ***
// **
// *

// #include <stdio.h>

// int main() {
//     for(int i = 1; i <= 5 ; i++){
//         for(int j = 5; j >= i; j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }