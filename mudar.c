/*Crie uma função que recebe duas variáveis inteiras por referência (usando 
ponteiros) e que troca o valor das mesmas.*/

#include <stdio.h>

void troca(int *p_a, int *p_b){
        int temporaria = (*p_a);
        (*p_a) = (*p_b);
        (*p_b) = temporaria; 
}

int main(){
        int x = 1;
        int y = 2;
        troca(&x, &y);
        printf("x = %i y = %i\n", x, y);
        return 0;
}
