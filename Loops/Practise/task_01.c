// print 1 to 10
// #include <stdio.h>
// int main() {
//     int n;
//     for(n = 1; n <= 10; n++){
//         printf("%d ", n);
//     }
//     printf("\n");

//     return 0;
// }


// print 10 to 1
// #include <stdio.h>

// int main() {
//     int n;
//     for(n = 10; n >= 1; n--){
//         printf("%d ", n);
//     }
//     printf("\n");

//     return 0;
// }

// Print all even numbers from 1 to 50.

// #include <stdio.h>

// int main() {
//     for(int n = 1; n <= 50; n++){
//         if(n%2 == 0){
//             printf("%d\n", n);
//         }
//     }
//     return 0;
// }


// Print the multiplication table of a given number

#include <stdio.h>

int main() {
    int tab;

    printf("Enter a number: ");
    scanf("%d", &tab);
    int temp = 0;
    
    for(int i = 1; i <= 10; i++){
        temp = tab * i;
        printf("%d x %d = %d\n", tab, i, temp);
    }
    return 0;
}