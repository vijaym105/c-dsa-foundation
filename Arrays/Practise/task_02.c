// Find the largest element.

// #include <stdio.h>

// int main() {
//     int arr[5];
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for(int i = 0; i < size; i++){
//         printf("Enter numbers: ");
//         scanf("%d", &arr[i]);
//     }

//     int largest = arr[0];

//     for(int j = 1; j < size; j++){
//         if(arr[j] > largest){
//             largest = arr[j];
//         }
//     }

//     printf("Largest number among all is: %d", largest);

//     return 0;
// }

// Find the smallest element.

#include <stdio.h>

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        printf("Enter numbers: ");
        scanf("%d", &arr[i]);
    }

    int small = arr[0];
    for(int j = 1; j < size; j++){
        if(arr[j] < small){
            small = arr[j];
        }

    }
    printf("Smallest number is: %d", small);

    return 0;
}