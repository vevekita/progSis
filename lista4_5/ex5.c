#include <stdio.h>

int main(){
        int p = 0;
        int q = 0;
        printf("Digite o código: ");
        scanf("%i", &p);
        printf("Digite a quantidade: ");
        scanf("%i", &q);
        float total = 0;
        if (p == 1){
                total = 1.10 * q;
                printf("O total é igual a %f\n", total);
        }else if (p == 2){ 
                total = 2.30 * q;
                printf("O total é igual a %f\n", total);
        }else if (p == 3){
                total = 4.70 * q;
                printf("O total é igual a %f\n", total);
        }
        return 0;

}
