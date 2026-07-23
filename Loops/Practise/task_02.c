// Find the sum of the first N natural numbers.

// #include <stdio.h>

// int main() {
//     int n, resp = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

  
//     for(int i = 0; i <= n; i++){
//         resp += i;
//         printf("Number is : %d ", resp);
//     }
    
//     return 0;
// }

// Reverse a number.
#include <stdio.h>

int main() {
    int n, reversed = 0, resp;

    printf("Enter number: ");
    int og = scanf("%d", &n);

    while (n != 0){
       
       resp = n % 10;
       reversed = reversed * 10 + resp;
       n = n / 10;
    }
    
    printf("Reversed : %d,  num: %d", reversed, og);

    return 0;
}

