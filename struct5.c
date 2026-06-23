#include <stdio.h>
#include <string.h>
 
int main() {
 
    /* Struct para armazenar uma data */
    struct TData {
        int dia;
        int mes;
        int ano;
    };
 
    /* Struct para armazenar um funcionário.
       Ela usa TData como campo interno (struct aninhada). */
    struct TFuncionario {
        char nome[50];
        float salario;
        struct TData admissao; /* campo do tipo TData */
    };
 
    /* 1) Declare uma variável do tipo TFuncionario chamada 'func' */
    /* ??? */
 
    /* 2) Leia os dados do funcionário */
    printf("Nome: ");
    fgets(/* ??? */, 50, stdin);
    func.nome[strlen(func.nome) - 1] = '\0'; /* remove o '\n' */
 
    printf("Salario: ");
    scanf("%f", /* ??? */);
 
    printf("Data de admissao\n");
 
    printf("  Dia: ");
    scanf("%d", /* ??? */);  /* acesse func.admissao.dia */
 
    printf("  Mes: ");
    scanf("%d", /* ??? */);  /* acesse func.admissao.mes */
 
    printf("  Ano: ");
    scanf("%d", /* ??? */);  /* acesse func.admissao.ano */
 
    /* 3) Exiba os dados */
    printf("\n--- Dados do Funcionario ---\n");
    printf("Nome   : %s\n",     /* ??? */);
    printf("Salario: R$ %.2f\n", /* ??? */);
    printf("Admissao: %02d/%02d/%d\n",
           /* ??? */,   /* dia   */
           /* ??? */,   /* mes   */
           /* ??? */);  /* ano   */
 
    return 0;
}
