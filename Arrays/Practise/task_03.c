// Copy one array into another.

// #include <stdio.h>

// int main() {
//     int arr[3];
//     int arr2[3];
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for(int i = 0; i < size; i++){
//         printf("Enter numbers in array: ");
//         scanf("%d", &arr[i]);
//     }

//     for(int j = 0; j < size; j++){
//         arr2[j] = arr[j];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         printf("Copied array: %d", arr[i]);
//     }
    
    
//     return 0;
// }

// Reverse the array.

// #include <stdio.h>

// int main() {

//     int arr[5] = {10, 20, 30, 40, 50};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int temp;

//     for (int i = 0; i < size / 2; i++) {

//         temp = arr[i];
//         arr[i] = arr[size - 1 - i];
//         arr[size - 1 - i] = temp;
//     }

//     printf("Reversed Array:\n");

//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }
