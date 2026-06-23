#include <stdio.h>
#include <string.h>
 
int main() {
 
    /* 1) Declare a struct TLivro */
    struct TLivro {
        /* ??? */
    };
 
    /* 2) Declare o vetor de 3 livros */
    /* ??? */
 
    /* 3) Declare a variável de controle do laço */
    int i;
 
    /* 4) Laço para LEITURA dos livros */
    for (i = 0; i < 3; i++) {
 
        printf("\n--- Livro %d ---\n", i + 1);
 
        printf("Titulo: ");
        getchar(); /* limpa o buffer antes do fgets */
        fgets(/* ??? */, 50, stdin);
        /* Remove o '\n' que o fgets inclui no final da string */
        biblioteca[i].titulo[strlen(biblioteca[i].titulo) - 1] = '\0';
 
        printf("Autor: ");
        fgets(/* ??? */, 40, stdin);
        biblioteca[i].autor[strlen(biblioteca[i].autor) - 1] = '\0';
 
        printf("Ano: ");
        scanf("%d", /* ??? */);
    }
 
    /* 5) Laço para EXIBIÇÃO dos livros */
    printf("\n========== Biblioteca ==========\n");
    for (i = 0; i < 3; i++) {
        printf("\nLivro %d\n", i + 1);
        printf("  Titulo: %s\n", /* ??? */);
        printf("  Autor : %s\n", /* ??? */);
        printf("  Ano   : %d\n", /* ??? */);
    }
 
    return 0;
}
 
