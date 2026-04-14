#include <stdio.h>

int main(){
        int v[] = {4, 2, 7, 5};
        int tamanho = 4;
        for(int i = 0; i < tamanho; i++){
                if(v[i] == 5){
                        printf("O valor 5 está presente\n");
                }
        }
        return 0;
}
