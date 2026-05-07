#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        srand(time(NULL));
        FILE *arquivo = fopen("random.txt", "w");
        if(arquivo == NULL){
                printf("Erro ao abrir o arquivo!\n");
                return 1;
        }
        for (int i = 0; i < 100; i++){
                int numero = rand() % 1000;
                fprintf(arquivo, "%d\n", numero);
        }
        fclose(arquivo);
        arquivo = NULL;

        printf("Arquivo 'random.txt' criado com sucesso\n");

        return 0;
}
