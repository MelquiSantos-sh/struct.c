#include <stdio.h>
 
int main() {
 
    /* Declara a struct Ponto com dois campos inteiros */
    struct Ponto {
        int x;
        int y;
    };
 
    /* Declara duas variáveis do tipo Ponto */
    struct Ponto p1, p2;
 
    /* Atribui valores ao ponto p1 */
    p1.x = 10;
    p1.y = 20;
 
    /* Copia TODOS os campos de p1 para p2 de uma só vez.
       Isso é possível porque são do mesmo tipo! */
    p2 = p1;
 
    /* Altera apenas o campo x de p2.
       Isso NÃO afeta p1. */
    p2.x = 99;
 
    /* Exibe os dois pontos */
    printf("p1: x=%d, y=%d\n", p1.x, p1.y);
    printf("p2: x=%d, y=%d\n", p2.x, p2.y);
 
    return 0;
}
 
