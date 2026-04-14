#include <stdio.h>

int main(){
        int v[] = {5, 4, 6, 3, 2, 1};
        int tamanho = 6;
        for (int i = 0; i < tamanho; i++){
                if(v[i] % 2 == 0){
                        v[i] = v[i] + 1;
                }
        }
        for (int i = 0; i < tamanho; i++){
                printf("%d ", v[i]);
        }
        printf("\n");
        return 0;
}
