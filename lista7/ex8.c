#include <stdio.h>

int main(){
        int n = 0;
        printf("Escreva um inteiro: ");
        scanf("%i", &n);

        int v[n];
        for (int i = 0; i < n; i++){
                 v[i] = (i + 1) * (i + 1);
        }

        for (int c = 0; c < n; c++){
                printf("%i ", v[c]);
        }
        printf("\n");

        return 0;
}
