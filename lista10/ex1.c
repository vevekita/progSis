#include <stdio.h>

typedef struct{
        int quantidade;
        float custo;
        char nome[20];
} Produto;

int main(){
        Produto a = {120, 0.10, "porca"};
        Produto b = {80, 0.20, "parafuso"};
        printf("%5i %2.2f %10s \n", a.quantidade, a.custo, a.nome);
        printf("%5i %2.2f %10s \n", b.quantidade, b.custo, b.nome);
        return 0;
}
