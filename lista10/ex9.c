#include <stdio.h>
#include <stdlib.h>

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

Personagem inimigo(){
        Personagem Zed = {"Zed", 0, 0, 0};
        Zed.poder = 20 + rand() % (30 - 20 + 1);
        Zed.defesa = 10 + rand() % (30 - 10 + 1);
        Zed.vida = 20 + rand() % (50 - 20 + 1);
        return Zed;
}

int main(){
        Personagem personagensInimigos[5] = {inimigo(), inimigo(), inimigo(), inimigo(), inimigo()};
        Personagem personagem1 = {"Xil", 54, 12, 100};
        printf("Batalhas\n");
        for(int i = 0; i < 5; i++){
                while(personagem1.vida > 0 && personagensInimigos[i].vida > 0){
                        int ataquep1 = ataque(personagem1, personagensInimigos[i]);
                        int ataqueinimigo = ataque(personagensInimigos[i], personagem1);
                        personagem1.vida -= ataqueinimigo;
                        personagensInimigos[i].vida -= ataquep1;
                        status(personagem1);
                        status(personagensInimigos[i]);
                }
                if(personagem1.vida > personagensInimigos[i].vida && personagem1.vida > 0){
                        printf("Xil venceu\n");
                }
                else if(personagensInimigos[i].vida > personagem1.vida && personagensInimigos > 0){
                        printf("Zed venceu\n");
                }
                else{
                        printf("Ambos morreram\n");
                }
        }
        return 0;
}
