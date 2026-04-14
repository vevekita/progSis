#include <stdio.h>

int main(){
        char s[100];
        printf("Escreva uma frase: ");
        fgets(s, 100, stdin);
        for (int i = 0; s[i] != '\0'; i++){
                printf("'%c'\n", s[i]);
        }


        return 0;
}
