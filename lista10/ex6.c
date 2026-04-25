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

int ataque(Personagem p1, Personagem p2){
        int dano = p1.poder - p2.defesa;
        if(dano < 0){
                dano = 0;
        }
        return dano;
}

int main(){
        Personagem personagem1 = {"Xil", 54, 12, 100};
        Personagem personagem2 = {"Yen", 40, 20, 100};
        status(personagem1);
        status(personagem2);
        int ataque1 = ataque(personagem1, personagem2);
        int ataque2 = ataque(personagem2, personagem1);
        printf("ataque de Xil a Yen vai causar %i de dano \n", ataque1);
        printf("ataque de Yen a Xil vai causar %i de dano \n", ataque2);
        return 0;
}
