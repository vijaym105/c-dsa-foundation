// Input 5 integers and print them.


// #include <stdio.h>

// int main() {
//     int arr[5];

//     for(int i = 0; i < 5; i++){
//         printf("Enter numbers: ");
//         scanf("%d", &arr[i]);
//     }

//     for(int j = 0; j < 5; j++){
//         printf("\n%d ", arr[j]);
//     }

//     return 0;
// }

// Input 5 integers and print them in reverse order.

#include <stdio.h>

int main() {

    int arr[5] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("enter %d integer: ",size);

    for(int i = 0; i < size; i++){
        printf("Elements\n: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order\n");

    for(int i = size - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}