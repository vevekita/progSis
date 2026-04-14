#include <stdio.h>

int main(){
        char s[100];
        printf("Escreva uma palavra: ");
        scanf("%s", s);
        char primeiro = s[0];
        int i = 0;
        while (s[i] != '\0'){
                i++;
        }
        char ultimo = s[i - 1];
        printf("%c %c\n", primeiro, ultimo);

        return 0;
}
