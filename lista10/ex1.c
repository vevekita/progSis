#include <stdio.h>

typedef struct{
        int quantidade;
        float custo;
        char nome[20];
} Produto;

void imprimir_produtos(Produto x){
        printf("%-15i %-10f %-10.2c\n", x.quantidade, x.custo, x.nome);

}
int main(){
        Produto a = {120, 0.10, "porca"};
        Produto b = {80, 0.20, "parafuso"};
        imprimir_produtos(a);
}
