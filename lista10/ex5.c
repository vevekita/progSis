#include <stdio.h>

typedef struct{
        char nome[20];
        int poder;
        int defesa;
        int vida;
} Personagem;

void status(Personagem x){
        printf("%10s poder=%03i defesa=%03i vida=%3i \n", x.nome, x.poder, x.defesa, x.vida);
}

int main(){
        Personagem personagem1 = {"Xil", 54, 12, 100};
        Personagem personagem2 = {"Yen", 40, 20, 100};
        status(personagem1);
        status(personagem2);
        return 0;
}
