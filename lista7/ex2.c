#include <stdio.h>

int main(){
        int a = 8;
        int v[] = {6, 2, 8, 1};
        int tamanho = 4;
        for(int i = 0; i < tamanho; i++){
                if(v[i] == a){
                        printf("Valor encontrado no índice: %d\n", i);
                }
        }
        return 0;
}
