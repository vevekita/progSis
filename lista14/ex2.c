#include <stdio.h>
#include <stdlib.h>

int main(){
        char c;
        int contador = 0;
        FILE *arquivo = fopen("random.txt", "r");
        if (arquivo == NULL){
                printf("Erro: Não foi possível abrir o arquivo!\n");
                return 1;
        }
        while((c = fgetc(arquivo)) != EOF){
                if (c == '\n'){
                        contador++;
                }
        }
        fclose(arquivo);
        arquivo = NULL;

        printf("O arquivo possui %d linhas.\n", contador);

        return 0;
}
