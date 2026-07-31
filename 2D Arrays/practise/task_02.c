// Find the sum of each row.

// #include <stdio.h>

// int main()
// {
//     int arr[2][2] = {
//         {2, 4},
//         {6, 8}};

//     int r1 = 0, r2 = 0;

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n After summing rows.\n");

//     for (int i = 0; i < 1; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             r1 += arr[i][j];
//         }
//         printf("Row 1 summation: %d\n", r1);
//     }

//     for (int i = 1; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             r2 += arr[i][j];
//         }
//         printf("Row 2 summation: %d", r2);
//     }

//     return 0;
// }

// Find the sum of each column.

// #include <stdio.h>

// int main() {
//     int arr[2][2] = {{2,4}, (5, 3)}, c1 = 0,c2 = 0;

//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 2; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 1; j++)
//         {
//             c1 += arr[i][j];
//         }
//     }
//     printf("Col 1 summation: %d\n", c1);

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 1; j < 2; j++)
//         {
//             c2 += arr[i][j];
//         }
//     }
//     printf("Col 2 summation: %d", c2);
//     return 0;
// }

// // Find the transpose of a matrix.
// 1 2 3

// 4 5 6

// 1 4

// 2 5

// 3 6

#include <stdio.h>

int main()
{
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int trav[3][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("traversal matrix\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            trav[j][i] = arr[i][j];
        }
    }

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", trav[i][j]);
        }
        printf("\n");
    }
    return 0;
}