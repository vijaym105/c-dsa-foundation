// Multiply every element by 2

// #include <stdio.h>

// int main() {
//     int arr[2][2] = {{2, 4}, {3, 5}};
    
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 2; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("After multiplying by 2.\n");
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 2; j++){
//             printf("%d ", (arr[i][j])*2);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Find the sum of the main diagonal.

#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,1}
    };

    int sum = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j){
            sum += arr[i][j];
            }
        }
    }
    printf("Summed diagonals: %d", sum);
    
    return 0;
}