// Convert a lowercase string to uppercase manually.
// #include <stdio.h>

// void Uppercase(char str[]){
//     int i = 0;

//     while(str[i] != '\0'){
//         if(str[i] >= 'a' && str[i] <= 'z' ){
//             str[i] = str[i] - 32;
//         }
//         i++;
//     }
// }

// int main(){
//     char text[] = "vijay";

//     printf("OG name: %s\n", text);
//     Uppercase(text);
//     printf("After conversion: %s", text);

//     return 0;
// }

// Convert uppercase to lowercase.

// #include <stdio.h>

// void lowerCase(char str[])
// {
//     for (int i = 0; str[i] != '\0'; i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//     }
// }

// int main()
// {
//     char name[20];

//     printf("Enter the name: ");
//     fgets(name, sizeof(name), stdin);

//     lowerCase(name);
//     printf("After converting case: %s", name);

//     return 0;
// }


// Reverse a string.

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Vijay";
    
    int len = strlen(name);

    for(int i = len - 1; i >= 0; i--){
        printf("%c", name[i]);
    }
    

    return 0;
}