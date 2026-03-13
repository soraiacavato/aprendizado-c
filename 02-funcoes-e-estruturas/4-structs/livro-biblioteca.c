// ===========================================================================
// PRÁTICA: SISTEMA DE BIBLIOTECA - PARTE 1
//
// OBJETIVO DESTA PARTE:
// Implementar o cadastro e a listagem de livros usando um array estático.
// Foco em structs, entrada/saída de dados e organização básica.
//
//
// ==========================================================================

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcspn()

// --- Constantes Globais ---
#define MAX_LIVROS 50
#define MAX_STRING 100

// --- Definição da Estrutura (Struct) ---
typedef struct {
    char nome[MAX_STRING];
    char autor[MAX_STRING];
    char editora[MAX_STRING];
    int edicao;
} Livro;

// --- Função para limpar o buffer de entrada ---
void limparBufferEntrada() {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// --- Função Principal (main) ---
int main () {

    Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    do {

        printf ("===================================\n");
        printf ("    BIBLIOTECA - PARTE 1\n");
        printf ("===================================\n");
        printf ("1 - Cadastrar novo livro\n");
        printf ("2 - Listar todos os livros\n");
        printf ("0 - Sair\n");
        printf ("-----------------------------------\n");
        printf ("Escolha uma opção: ");
        scanf ("%d", &opcao);
        limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf.

        switch (opcao) {
            case 1:
                printf ("--- Cadastro de Novo Livro ---\n\n");

                if (totalLivros < MAX_LIVROS) {
                    printf ("Digite o nome do livro: ");
                    fgets (biblioteca[totalLivros].nome, MAX_STRING, stdin);

                    printf ("Digite o autor: ");
                    fgets (biblioteca[totalLivros].autor, MAX_STRING, stdin);

                    printf ("Digite a editora: ");
                    fgets (biblioteca[totalLivros].editora, MAX_STRING, stdin);

                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0';
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0';
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0';

                    printf ("Digite a edicao: ");
                    scanf ("%d", &biblioteca[totalLivros].edicao);
                    limparBufferEntrada();

                    totalLivros++;

                    printf ("\nLivro cadastrado com sucesso!\n");

                } else {
                    printf ("Biblioteca cheia! Nao e possivel cadastrar mais livros!\n");
                }

                printf ("\nPressione Enter para continuar...");
                getchar(); // Aguarda o usuário pressionar Enter.
                break;

            case 2:
                printf ("--- Lista de Livros Cadastrados ---\n\n");

                if (totalLivros == 0) {
                    printf ("Nenhum livro cadastrado ainda.\n");
                } else {
                    for (int i = 0; i < totalLivros; i++) {
                        printf ("--------------------------------------\n");
                        printf ("LIVRO %d:\n", i + 1);
                        printf ("Nome: %s\n", biblioteca[i].nome);
                        printf ("Autor: %s\n", biblioteca[i].autor);
                        printf ("Editora: %s\n", biblioteca[i].editora);
                        printf ("Edicao: %d\n", biblioteca[i].edicao);
                    }
                     printf ("--------------------------------------\n");
                }

                printf ("\nPressione Enter para continuar...");
                getchar(); // Aguarda o usuário pressionar Enter.
                break;
                
            case 0:
                printf ("\nSaindo do sistema...\n");
                break;    

            default:
                printf ("\nOpcao Invalida! Tente novamente.\n");
                printf ("\nPressione Enter para continuar...");
                getchar(); // Aguarda o usuário pressionar Enter.
                break;
        }

    } while (opcao != 0);


    system ("pause");
    return 0;
}