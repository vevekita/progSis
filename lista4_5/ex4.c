#include <stdio.h>

int main(){
        int a = 0;
        int b = 0;
        printf("Digite um número inteiro a: ");
        scanf("%i", &a);
        printf("Digite um número inteiro b: ");
        scanf("%i", &b); 
        int soma = a + b;
        if (soma >= 0 && soma < 360){
                printf("A soma dos ângulos é igual a %i", soma);
        }else{
                int diferenca = soma % 360;
                printf("Como a soma dos dois ângulos ultrapassou 360, arrumando fica %i", diferenca);
        }
        return 0;
}
