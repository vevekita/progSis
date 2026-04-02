#include <stdio.h>

int main(){
        int produtos = 333;
        int porCaixa = 12;
        int caixas = produtos/porCaixa;
        int restante = produtos % porCaixa;
        printf("O número de caixas utilizadas é igual a %i\n", caixas);
        printf("E o número de produtos restantes é igual a %i\n", restante);
        return 0;
}
