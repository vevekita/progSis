#include <stdio.h>

int main(){
        int c = 0;
        for(int a = 0; a <= 100; a++){
                c = c + a;
        }
        printf("O valor da soma dos inteiros de 0 a 100 é igual a %i\n", c);

        return 0;
}
