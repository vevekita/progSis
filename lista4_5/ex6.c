#include <stdio.h>

int main(){
        int a = 0;
        int b = 0;
        int c = 0;
        printf("Insira o valor a: ");
        scanf("%i", &a);
        printf("Insira o valor b: ");
        scanf("%i", &b);
        printf("Insira o valor c: ");
        scanf("%i", &c);
        if (a == b || a == c || b == c){
                printf("Os números devem ser distintos!");
        }
        else if (a < b && a < c && b < c){
                printf("%i %i %i", a, b, c);
        }
        else if (a < b && a < b && c < b){
                printf("%i %i %i", a, c, b);
        }
        else if (a > b && a < c && b < c){
                printf("%i %i %i", b, a, c);
        }
        else if (a > b && a < c && b > c){
                printf("%i %i %i", c, a, b);
        }
        else if (a > b && a > c && b < c){
                printf("%i %i %i", b, c, a);
        }
        else if (a > b && a > c && b > c){
                printf("%i %i %i", c, b, a);
        }
        return 0;


}

