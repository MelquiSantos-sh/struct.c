#include <stdio.h>
#include <string.h>
 
int main() {
 
    /* 1) Declare a struct TAluno com os campos:
          nome (char[50]), idade (int), nota (float) */
    /* ??? */
 
 
    /* 2) Declare uma variável chamada 'aluno' do tipo TAluno */
    /* ??? */
 
 
    /* 3) Leia os dados do usuário */
    printf("Nome: ");
    fgets(/* ??? */, 50, stdin);
 
    printf("Idade: ");
    scanf("%d", /* ??? */);
 
    printf("Nota: ");
    scanf("%f", /* ??? */);
 
 
    /* 4) Exiba os dados lidos */
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome : %s", /* ??? */);
    printf("Idade: %d\n", /* ??? */);
    printf("Nota : %.2f\n", /* ??? */);
 
 
    return 0;
}
 
