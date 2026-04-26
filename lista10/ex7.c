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
        printf("Batalha:\n");
        while(personagem1.vida > 0 && personagem2.vida > 0){
                int ataquep1 = ataque(personagem1, personagem2);
                int ataquep2 = ataque(personagem2, personagem1);
                personagem1.vida -= ataquep2;
                personagem2.vida -= ataquep1;
                status(personagem1);
                status(personagem2);
        }
        if(personagem1.vida > personagem2.vida && personagem1.vida > 0){
                printf("Xil venceu\n");
        }
        else if(personagem2.vida > personagem1.vida && personagem2.vida > 0){
                printf("Yen venceu\n");
        }
        else{
                printf("Ambos morreram\n");
        }
        return 0;
}
