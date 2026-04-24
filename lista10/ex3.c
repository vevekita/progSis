#include <stdio.h>

typedef struct{
        int quantidade;
        float custo;
        char nome[20];
} Produto;

void imprimir_produtos(Produto x){
        printf("%5i %2.2f %10s \n", x.quantidade, x.custo, x.nome);

}

float valor_produto(Produto p){
        float resultado;
        resultado = p.quantidade * p.custo;
        return resultado;
}

int main(){
        Produto a = {120, 0.10, "porca"};
        Produto b = {80, 0.20, "parafuso"};
        imprimir_produtos(a);
        imprimir_produtos(b);
        float valorA = valor_produto(a);
        float valorB = valor_produto(b);
        printf("Valor total = %.2f \n", valorA + valorB);
        return 0;
}
