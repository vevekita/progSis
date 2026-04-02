#include <stdio.h>

int main(){
        float comprimento = 0;
        float largura = 0;
        printf("Digite o valor do comprimento: ");
        scanf("%f", &comprimento);
        printf("Digite o valor da largura: ");
        scanf("%f", &largura);
        if (comprimento == largura){
                printf("A sua figura é um quadrado\n");
        }else{
                printf("A sua figura é um retângulo\n");
        }
        return 0;
}
