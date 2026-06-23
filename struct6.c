#include <stdio.h>
#include <string.h>
 
int main() {
 
    /* 1) Declare a struct TAluno */
    struct TAluno {
        /* ??? */
    };
 
    /* 2) Declare o vetor de 5 alunos */
    /* ??? */
 
    /* 3) Declare variáveis auxiliares */
    int i;
    int indice_maior; /* guardará o índice do aluno com maior média */
 
    /* 4) Laço de LEITURA */
    for (i = 0; i < 5; i++) {
 
        printf("\n--- Aluno %d ---\n", i + 1);
 
        printf("Nome: ");
        getchar(); /* limpa o buffer */
        fgets(/* ??? */, 50, stdin);
        turma[i].nome[strlen(turma[i].nome) - 1] = '\0';
 
        printf("Nota 1: ");
        scanf("%f", /* ??? */);
 
        printf("Nota 2: ");
        scanf("%f", /* ??? */);
 
        /* 5) Calcule a média de cada aluno dentro do laço */
        turma[i].media = /* ??? */;
    }
 
    /* 6) Encontre o aluno com a maior média.
          Comece assumindo que o primeiro (índice 0) é o maior. */
    indice_maior = 0;
    for (i = 1; i < 5; i++) {
        if (turma[i].media > turma[indice_maior].media) {
            /* atualiza o índice se encontrar uma média maior */
            indice_maior = /* ??? */;
        }
    }
 
    /* 7) Exiba a tabela */
    printf("\n--------------------------------------------\n");
    printf("%-17s| NOTA 1 | NOTA 2 | MEDIA\n", "ALUNO");
    printf("--------------------------------------------\n");
 
    for (i = 0; i < 5; i++) {
        printf("%-17s|  %5.2f  |  %5.2f  | %5.2f\n",
               /* ??? */,   /* nome  */
               /* ??? */,   /* nota1 */
               /* ??? */,   /* nota2 */
               /* ??? */);  /* media */
    }
 
    printf("--------------------------------------------\n");
 
    /* 8) Exiba o aluno com maior média */
    printf("Melhor media: %s com %.2f\n",
           turma[indice_maior].nome,
           turma[indice_maior].media);
 
    return 0;
}
