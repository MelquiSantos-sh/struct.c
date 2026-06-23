#include <stdio.h>
 
int main() {
 
    /* 1) Declare a struct TProduto */
    struct TProduto {
        /* ??? */
    };
 
    /* 2) Declare a variável 'produto' do tipo TProduto */
    /* ??? */
 
    /* 3) Declare uma variável float para guardar o total */
    /* ??? */
 
    /* 4) Leia os dados do produto */
    printf("Codigo: ");
    scanf("%d", /* ??? */);
 
    printf("Descricao: ");
    /* use fgets para ler a descricao — dica: limpe o buffer antes com getchar() */
    getchar(); /* limpa o '\n' que ficou no buffer após o scanf */
    fgets(/* ??? */, 50, stdin);
 
    printf("Valor unitario: ");
    scanf("%f", /* ??? */);
 
    printf("Quantidade: ");
    scanf("%d", /* ??? */);
 
    /* 5) Calcule o total */
    total = /* ??? */;
 
    /* 6) Exiba o resultado */
    printf("----------------------------\n");
    printf("Total em estoque: R$ %.2f\n", /* ??? */);
 
    return 0;
}
 
