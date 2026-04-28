#include <stdio.h>

typedef struct{
        int x;
        int y;
} Ponto;

void f(int i, float f, char c, Ponto p, int v[3]){
        (*p_i) = 0; /*variável do tipo ponteiro*/
        f = 0;
        c = 0;
        p.x = p.y = 0;
        v[0] = v[1] = v[2] = 7;
}

int main(){
        int a = 1;
        float b = 2.3;
        char c = 'x';
        Ponto d = {8, 9};
        int e[3] = {0, 1, 2};
        f(&a, b, c, d, e);
        printf("%i %f %c \n", a, b, c);
        prinf("%i %i \n", d.x, d.y);
        printf("%i %i %i \n", e[0], e[1], e[3]);
};
