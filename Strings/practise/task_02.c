// Convert a lowercase string to uppercase manually.
#include <stdio.h>

void Uppercase(char str[]){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z' ){
            str[i] = str[i] - 32;
        }
        i++;
    }
}

int main(){
    char text[] = "vijay";

    printf("OG name: %s\n", text);
    Uppercase(text);
    printf("After conversion: %s", text);

    return 0;
}

