// Take a single-word string as input and print it.
// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter a charcacter: ");
//     scanf("%c", &ch);

//     printf("\nCharacter is: %c", ch);

//     return 0;
// }

// Print every character of a string on a separate line.
// #include <stdio.h>

// int main() {
//     char ch[10] = "Vijay";

//     for(int i = 0; i < 5; i++){
//         printf("%c\n", ch[i]);
//     }

//     return 0;
// }

// Find the length of a string manually.
// Restriction:
// Don't use strlen().

// #include <stdio.h>

// int main() {
//     char str[20] = "Vijay";
//     int count = 0;

//     while(str[count] != '\0'){
//         count++;
//     }
//     printf("Length of string: %d", count);
//     return 0;
// }

// Count uppercase and lowercase characters.
#include <stdio.h>

int main() {
    char name[20];
    int up = 0, low = 0;

    printf("Enter a word: ");
    fgets(name, sizeof(name), stdin);

    for(int i = 0; name[i] != '\0'; i++){
        if(name[i] >= 'A' && name[i] <= 'Z') up++;
        else low++;
    }    

    printf("Upper char used: %d\nLowercase char used: %d", up, low);
    return 0;
}