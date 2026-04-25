#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado[3], estado2[3], codigo_carta[4], codigo_carta2[4], nome_cidade[51], nome_cidade2[51];
    int pontos_turisticos, pontos_turisticos2, resultado, cidade_vencedora;
    float area, area2, pib, pib2, densidade_pop1, densidade_pop2, pib_capita1, pib_capita2, superPoder1, superPoder2;
    unsigned long int numero_habitantes, numero_habitantes2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Carta 1

    printf("carta 1 - digite o nome abreviado do estado (ex: SP, RJ, CE...) : ");
    scanf(" %s", estado);

    printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
    scanf(" %s", codigo_carta);

    printf("carta 1 - digite o nome da cidade : ");
    scanf(" %[^\n]", nome_cidade);

    printf("carta 1 - digite o número de habitantes da cidade (não utilize ponto ou vírgulas!) : ");
    scanf(" %lu", &numero_habitantes);

    printf("carta 1 - digite a área em km² da cidade : ");
    scanf(" %f", &area);

    printf("carta 1 - digite o pib dessa cidade : ");
    scanf(" %f", &pib);

    printf("carta 1 - digite a quantidade de pontos turísticos dessa cidade : ");
    scanf(" %d", &pontos_turisticos);

    densidade_pop1 = (float) numero_habitantes / area;
    pib_capita1 = (float) pib / numero_habitantes;
    superPoder1 = (float) (numero_habitantes + area + pib + pontos_turisticos + pib_capita1) + (1/densidade_pop1);

    printf("---- // ----\n");
    printf("insira os dados da próxima carta\n");
    printf("---- // ----\n"); 

  // Carta 2

    printf("carta 2 - digite o nome abreviado do estado (ex: SP, RJ, CE...) : ");
    scanf(" %s", estado2);

    printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
    scanf(" %s", codigo_carta2);

    printf("carta 2 - digite o nome da cidade : ");
    scanf(" %[^\n]", nome_cidade2);

    printf("carta 2 - digite o número de habitantes da cidade (não utilize ponto ou vírgulas!) : ");
    scanf(" %lu", &numero_habitantes2);

    printf("carta 2 - digite a área em km² da cidade : ");
    scanf(" %f", &area2);

    printf("carta 2 - digite o pib dessa cidade : ");
    scanf(" %f", &pib2);

    printf("carta 2 - digite a quantidade de pontos turísticos dessa cidade : ");
    scanf(" %d", &pontos_turisticos2);

    densidade_pop2 = (float) numero_habitantes2 / area2;
    pib_capita2 = (float) pib2 / numero_habitantes2; 
    superPoder2 = (float) (numero_habitantes2 + area2 + pib2 + pontos_turisticos2 + pib_capita2) + (1/densidade_pop2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    printf("---- // ----\n");
    printf("Resultado final\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("---- // ----\n"); 
    printf("Carta 1 - %s (%s): %lu\n", nome_cidade, estado, numero_habitantes);
    printf("Carta 1 - %s (%s): %lu\n", nome_cidade2, estado2, numero_habitantes2);

      if (numero_habitantes > numero_habitantes2){
        printf ("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
    } else {
        printf ("Resultado: CArta 2 (%s) venceu!\n", nome_cidade2);
    }
    
    return 0;
}
