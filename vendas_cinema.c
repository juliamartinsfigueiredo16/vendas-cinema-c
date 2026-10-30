#include <stdio.h>

#define FILMES 5
#define DIAS 7

int main() {
    /* Matriz: cada linha representa um filme e cada coluna, um dia. */
    int vendas[FILMES][DIAS];
    int totalFilme[FILMES] = {0};
    int totalDia[DIAS] = {0};

    /* Vetores para armazenar precos e faturamento dos filmes. */
    float precoIngresso[FILMES];
    float faturamentoFilme[FILMES];

    char nomesFilmes[FILMES][30] = {
        "Aventura Espacial",
        "O Misterio da Cidade",
        "Comedia em Familia",
        "Acao Total",
        "Documentario Natural"
    };

    int filme;
    int dia;
    int maiorFilme = 0;
    float maiorFaturamento = 0.0;

    printf("=== SISTEMA DE VENDAS DE CINEMA ===\n");

    /* Le os precos e as vendas de cada filme durante os sete dias. */
    for (filme = 0; filme < FILMES; filme++) {
        do {
            printf("\nDigite o preco do ingresso de %s: R$ ",
                   nomesFilmes[filme]);
            scanf("%f", &precoIngresso[filme]);

            if (precoIngresso[filme] <= 0) {
                printf("Preco invalido. Digite um valor maior que zero.\n");
            }
        } while (precoIngresso[filme] <= 0);

        for (dia = 0; dia < DIAS; dia++) {
            do {
                printf("Ingressos vendidos no dia %d: ", dia + 1);
                scanf("%d", &vendas[filme][dia]);

                if (vendas[filme][dia] < 0) {
                    printf("Quantidade invalida. Digite zero ou mais.\n");
                }
            } while (vendas[filme][dia] < 0);

            /* Atualiza os totais por filme e por dia. */
            totalFilme[filme] += vendas[filme][dia];
            totalDia[dia] += vendas[filme][dia];
        }

        faturamentoFilme[filme] =
            totalFilme[filme] * precoIngresso[filme];

        /* Desafio bonus: identifica o filme de maior faturamento. */
        if (faturamentoFilme[filme] > maiorFaturamento) {
            maiorFaturamento = faturamentoFilme[filme];
            maiorFilme = filme;
        }
    }

    printf("\n=== RELATORIO DE VENDAS ===\n");
    printf("%-25s %15s %18s\n",
           "Filme", "Ingressos", "Faturamento");

    for (filme = 0; filme < FILMES; filme++) {
        printf("%-25s %15d %15.2f\n",
               nomesFilmes[filme],
               totalFilme[filme],
               faturamentoFilme[filme]);
    }

    printf("\n=== TOTAL DE INGRESSOS POR DIA ===\n");

    for (dia = 0; dia < DIAS; dia++) {
        printf("Dia %d: %d ingressos\n", dia + 1, totalDia[dia]);
    }

    printf("\n=== DESTAQUE DA SEMANA ===\n");
    printf("Filme com maior faturamento: %s\n",
           nomesFilmes[maiorFilme]);
    printf("Faturamento: R$ %.2f\n", maiorFaturamento);

    return 0;
}
