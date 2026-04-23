#include <stdio.h>

/*Faça um programa que defina uma strucut chamada horario, 
contendo hora h e minuto m. Crie um procedimento para imprimir 
um Horario passado como parametro. crie uma função que recebe um horario e 
um número min de minutos como paramentro, retornando um novo horário com 
aqueles minutos adicionados.*/

typedef struct {
        int h;
        int m;
} Horario;

void imprimir_horario(Horario x){
        printf("%02i:%02i \n", x.h, x.m);
}

Horario soma_minutos(Horario y, int min){
        Horario res;
        res.m = (y.m + min) % 60;
        res.h = (y.h + (y.m + min) / 60 + y.h) % 24;
        return res;
}

int main(){
        Horario h = {16, 17};
        imprimir_horario(soma_minutos(h, 50));
}
