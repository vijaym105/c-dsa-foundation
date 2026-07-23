// ===== MENU =====

// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exit

// The program should:

// Keep showing the menu until the user chooses Exit.
// Use a while or do-while loop.
// Use switch to perform operations.

#include <stdio.h>

int main()
{
    int choice, num1, num2, res;

    do
    {
        printf("\n\n===== MENU =====\n\n");
        printf("1. Addition\n2. Subraction\n3. Multiplication\n4. Division\n5. Exit\n");

        printf("\nEnter your choice in number: ");
        scanf("%d", &choice);
        if (choice == 5)
        {
            printf("Exited.");
            break;
        }
        else if (choice > 5)
        {
            printf("invalid choice, range is (1-5)");
            break;
        }
        
        
        printf("Enter no (2 number only) : ");
        scanf("%d %d", &num1, &num2);

        switch (choice)
        {
        case 1:
            res = num1 + num2;
            printf("%d + %d = %d", num1, num2, res);
            break;
        case 2:
            res = num1 - num2;
            printf("%d - %d = %d", num1, num2, res);
            break;
        case 3:
            res = num1 * num2;
            printf("%d * %d = %d", num1, num2, res);
            break;
        case 4:
        if(num2 == 0){
            printf("Error: Division by zero is not allowed.");
        }
        else{
            res = num1 / num2;
            printf("%d / %d = %d", num1, num2, res);
        }
        break;
        }
    } while (1);

    return 0;
}