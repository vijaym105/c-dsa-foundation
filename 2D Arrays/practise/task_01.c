// Input and print a 2×2 matrix.

// #include <stdio.h>

// int main() {
//     int mat[2][2] = {
//         {1, 2},
//         {3, 4},
//     };

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 2; j++){
//             printf("%d ", mat[i][j]);
//         }
//         printf("\n");
//     }



//     return 0;
// }

// Find the sum of all elements.

// #include <stdio.h>

// int main() {
//     int arr[2][2] = {{1,2}, {3,4}};
//     int sum = 0;

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 2; j++){
//             sum += arr[i][j];
//         }

//     }
//     printf("Sum of all elems: %d", sum);

//     return 0;
// }

// Find the largest element.

#include <stdio.h>

int main() {
    int arr[3][3];

    

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the elems [%d] [%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int largest = arr[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] > largest){
                largest = arr[i][j];
            }
        }
    }

    printf("\nLargest element is: %d", largest);


    return 0;
}