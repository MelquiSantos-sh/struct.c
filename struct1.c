#include <stdio.h>
#include <string.h>

#define TAM 100

struct TPessoa {
    int codigo;
    char nome[50];
    char genero;
    int idade;
    float altura;
    float peso;
};

int main() {

    struct TPessoa cadastro[TAM];

    int i;
    int op;
    int cod;
    int encontrado;
    int totalCadastros = 0;
    int proximoCodigo = 1;

    for (i = 0; i < TAM; i++) {
        cadastro[i].codigo = 0;
    }

    do {

        printf("\n===== MENU =====\n");
        printf("1 - Cadastrar pessoas\n");
        printf("2 - Alterar dados de uma pessoa\n");
        printf("3 - Excluir uma pessoa\n");
        printf("4 - Mostrar dados de uma pessoa\n");
        printf("5 - Mostrar todos os cadastros\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch(op) {

            case 1: {

                int qtd;

                printf("Quantas pessoas deseja cadastrar? ");
                scanf("%d", &qtd);

                if (totalCadastros + qtd > TAM) {
                    printf("Limite maximo de %d registros excedido.\n", TAM);
                    break;
                }

                for (i = 0; i < qtd; i++) {

                    printf("\n--- Pessoa %d ---\n", totalCadastros + 1);

                    cadastro[totalCadastros].codigo = proximoCodigo++;

                    printf("Nome: ");
                    scanf(" %[^\n]", cadastro[totalCadastros].nome);

                    printf("Genero (M/F): ");
                    scanf(" %c", &cadastro[totalCadastros].genero);

                    printf("Idade: ");
                    scanf("%d", &cadastro[totalCadastros].idade);

                    printf("Altura: ");
                    scanf("%f", &cadastro[totalCadastros].altura);

                    printf("Peso: ");
                    scanf("%f", &cadastro[totalCadastros].peso);

                    totalCadastros++;
                }

                printf("\nCadastro realizado com sucesso!\n");
                break;
            }

            case 2:

                printf("Informe o codigo da pessoa a alterar: ");
                scanf("%d", &cod);

                encontrado = -1;

                for (i = 0; i < totalCadastros; i++) {
                    if (cadastro[i].codigo == cod) {
                        encontrado = i;
                        break;
                    }
                }

                if (encontrado == -1) {

                    printf("Codigo nao encontrado.\n");

                } else {

                    int subop;

                    do {

                        printf("\n--- Editando %s ---\n",
                               cadastro[encontrado].nome);

                        printf("1 - Nome\n");
                        printf("2 - Genero\n");
                        printf("3 - Idade\n");
                        printf("4 - Altura\n");
                        printf("5 - Peso\n");
                        printf("0 - Sair\n");
                        printf("Opcao: ");

                        scanf("%d", &subop);

                        switch(subop) {

                            case 1:
                                printf("Novo nome: ");
                                scanf(" %[^\n]",
                                      cadastro[encontrado].nome);
                                break;

                            case 2:
                                printf("Novo genero: ");
                                scanf(" %c",
                                      &cadastro[encontrado].genero);
                                break;

                            case 3:
                                printf("Nova idade: ");
                                scanf("%d",
                                      &cadastro[encontrado].idade);
                                break;

                            case 4:
                                printf("Nova altura: ");
                                scanf("%f",
                                      &cadastro[encontrado].altura);
                                break;

                            case 5:
                                printf("Novo peso: ");
                                scanf("%f",
                                      &cadastro[encontrado].peso);
                                break;

                            case 0:
                                printf("Saindo da edicao...\n");
                                break;

                            default:
                                printf("Opcao invalida.\n");
                        }

                    } while(subop != 0);
                }

                break;

            case 3:

                printf("Informe o codigo da pessoa a excluir: ");
                scanf("%d", &cod);

                encontrado = -1;

                for (i = 0; i < totalCadastros; i++) {
                    if (cadastro[i].codigo == cod) {
                        encontrado = i;
                        break;
                    }
                }

                if (encontrado == -1) {

                    printf("Codigo nao encontrado.\n");

                } else {

                    cadastro[encontrado].codigo = 0;

                    strcpy(cadastro[encontrado].nome, "");

                    cadastro[encontrado].genero = ' ';
                    cadastro[encontrado].idade = 0;
                    cadastro[encontrado].altura = 0;
                    cadastro[encontrado].peso = 0;

                    printf("Pessoa excluida com sucesso.\n");
                }

                break;

            case 4:

                printf("Informe o codigo da pessoa: ");
                scanf("%d", &cod);

                encontrado = -1;

                for (i = 0; i < totalCadastros; i++) {

                    if (cadastro[i].codigo == cod) {
                        encontrado = i;
                        break;
                    }
                }

                if (encontrado == -1) {

                    printf("Codigo nao encontrado.\n");

                } else {

                    printf("\n--- Dados da Pessoa ---\n");
                    printf("Codigo : %d\n",
                           cadastro[encontrado].codigo);
                    printf("Nome   : %s\n",
                           cadastro[encontrado].nome);
                    printf("Genero : %c\n",
                           cadastro[encontrado].genero);
                    printf("Idade  : %d\n",
                           cadastro[encontrado].idade);
                    printf("Altura : %.2f\n",
                           cadastro[encontrado].altura);
                    printf("Peso   : %.2f\n",
                           cadastro[encontrado].peso);
                }

                break;

            case 5:

                printf("\n===== TODOS OS CADASTROS =====\n");

                for (i = 0; i < totalCadastros; i++) {

                    if (cadastro[i].codigo != 0) {

                        printf("\nCodigo : %d\n",
                               cadastro[i].codigo);
                        printf("Nome   : %s\n",
                               cadastro[i].nome);
                        printf("Genero : %c\n",
                               cadastro[i].genero);
                        printf("Idade  : %d\n",
                               cadastro[i].idade);
                        printf("Altura : %.2f\n",
                               cadastro[i].altura);
                        printf("Peso   : %.2f\n",
                               cadastro[i].peso);
                    }
                }

                break;

            case 0:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }

    } while(op != 0);

    return 0;
}
