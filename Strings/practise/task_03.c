// Count words in a sentence.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char sent[] = "Hii whassupp bro";
    
//     int count = sizeof(fgets(sent, sizeof(sent), stdin)) - 1;

//     printf("There are %d words", count);
//     return 0;
// }

// Count how many times a given character appears.

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "Assasians";
//     char ch;
//     int count = 0;

//     printf("Enter a char: ");
//     scanf("%c", &ch);


//     for(int i = 0; str[i] != '\0'; i++){
//         if(str[i] == ch){
//             count++;
//         }
//     }
//     printf("character in words are %d times", count);

//     return 0;
// }

// Remove all spaces from a string.

#include <stdio.h>
#include <string.h>

int main() {
    int i,j = 0;
    char name[] = "Vijay bhai heloo";

    fgets(name, sizeof(name), stdin);
    printf("Original: %s", name);

    for(i = 0; name[i] != '\0'; i++){
        if(name[i] != ' '){
            name[j] = name[i];
            j++; 
        }

    }

    name[j] = '\0';
    printf("AFter removing spaces: %s", name);

    return 0;
}