#include <stdio.h>

void impares(int n){
        int contador = 0;
        for(int j = 0; contador < n; j++){
                if(j % 2 != 0){
                        printf("%i ", j);
                        contador += 1;
                }
        }
}

int main(){
        impares(10);
        return 0;
}
