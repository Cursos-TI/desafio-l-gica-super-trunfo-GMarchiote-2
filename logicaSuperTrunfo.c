#include <stdio.h>

int main() {
  
  char estado, estado2, codigo_carta[4], codigo_carta2[4], nome_pais[51], nome_pais2[51], *nomeAtributo1, *nomeAtributo2;
  int pontos_turisticos, pontos_turisticos2, resultado, pais_vencedor, opcao1, opcao2;
  float area, area2, pib, pib2, densidade_pop1, densidade_pop2, pib_capita1, pib_capita2, superPoder1, superPoder2, somaAtributos, somaAtributos2, soma1Atributos, soma2Atributos, soma1Atributos2, soma2Atributos2;
  unsigned long int numero_habitantes, numero_habitantes2;
 
        // Área para entrada de dados
        // Carta 1
        printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
        scanf(" %s", codigo_carta);

        printf("carta 1 - digite o nome do país : ");
        scanf(" %[^\n]", nome_pais);

        printf("carta 1 - digite o número de habitantes do país (não utilize ponto ou vírgulas!) : ");
        scanf(" %lu", &numero_habitantes);

        printf("carta 1 - digite a área em km² do país : ");
        scanf(" %f", &area);

        printf("carta 1 - digite o pib desse país : ");
        scanf(" %f", &pib);

        printf("carta 1 - digite a quantidade de pontos turísticos desse país : ");
        scanf(" %d", &pontos_turisticos);

        densidade_pop1 = (float) numero_habitantes / area;
        pib_capita1 = (float) pib / numero_habitantes;
        superPoder1 = (float) (numero_habitantes + area + pib + pontos_turisticos + pib_capita1) + (1/densidade_pop1);

        printf("---- // ----\n");
        printf("insira os dados da próxima carta\n");
        printf("---- // ----\n"); 

        // Carta 2

        printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
        scanf(" %s", codigo_carta2);

        printf("carta 2 - digite o nome do país : ");
        scanf(" %[^\n]", nome_pais2);

        printf("carta 2 - digite o número de habitantes do país (não utilize ponto ou vírgulas!) : ");
        scanf(" %lu", &numero_habitantes2);

        printf("carta 2 - digite a área em km² do país : ");
        scanf(" %f", &area2);

        printf("carta 2 - digite o pib desse país : ");
        scanf(" %f", &pib2);

        printf("carta 2 - digite a quantidade de pontos turísticos desse país : ");
        scanf(" %d", &pontos_turisticos2);

        densidade_pop2 = (float) numero_habitantes2 / area2;
        pib_capita2 = (float) pib2 / numero_habitantes2; 
        superPoder2 = (float) (numero_habitantes2 + area2 + pib2 + pontos_turisticos2 + pib_capita2) + (1/densidade_pop2);

        // Menu onde o usuário selecionará quais atributos serão comparados
        printf("*** Escolha o primeiro atributo que você deseja comparar: *** \n");
        printf("1) População\n");
        printf("2) Área\n");
        printf("3) PIB\n");
        printf("4) Quantidade de pontos turísticos\n");
        printf("5) Densidade demográfica\n");
        scanf(" %d", &opcao1);

        switch (opcao1)
        {
        case 1:
            soma1Atributos = numero_habitantes; soma2Atributos = numero_habitantes2;
            nomeAtributo1 = "População";
            break;
        case 2:
            soma1Atributos = area; soma2Atributos = area2;
            nomeAtributo1 = "Área";
            break;
        case 3:
            soma1Atributos = pib; soma2Atributos = pib;
            nomeAtributo1 = "PIB";
            break;
        case 4: 
            soma1Atributos = pontos_turisticos; soma2Atributos = pontos_turisticos2;
            nomeAtributo1 = "Pontos turisticos";
            break;
        case 5:
            soma1Atributos = (1/densidade_pop1); soma2Atributos = (1/densidade_pop2);
            nomeAtributo1 = "Densidade demográfica";
        default:
            printf("Opção inválida\n");
            break;
        }

        printf("*** Escolha o segundo atributo: ***\n");
        if (opcao1 != 1) printf("1) População\n");
        if (opcao1 != 2) printf("2) Área\n");
        if (opcao1 != 3) printf("3) PIB\n");
        if (opcao1 != 4) printf("4) Pontos Turísticos\n");
        if (opcao1 != 5) printf("5) Densidade demográfica\n");
        scanf(" %d", &opcao2);

        switch (opcao2)
        {
        case 1:
            soma1Atributos2 = numero_habitantes; soma2Atributos2 = numero_habitantes2;
            nomeAtributo2 = "População";
            break;
        case 2:
            soma1Atributos2 = area; soma2Atributos2 = area2;
            nomeAtributo2 = "Área";
            break;
        case 3:
            soma1Atributos2 = pib; soma2Atributos2 = pib;
            nomeAtributo2 = "PIB";
            break;
        case 4: 
            soma1Atributos2 = pontos_turisticos; soma2Atributos2 = pontos_turisticos2;
            nomeAtributo2 = "Pontos turisticos";
            break;
        case 5:
            soma1Atributos2 = (1/densidade_pop1); soma2Atributos2 = (1/densidade_pop2);
            nomeAtributo2 = "Densidade demográfica";
        default:
            printf("Opção inválida\n");
            break;
        }

        somaAtributos = soma1Atributos + soma1Atributos2;
        somaAtributos2 = soma2Atributos + soma2Atributos2;

        // Área para exibição dos dados do país
        // Carta 1
        
        printf("Carta 1 :\n");
        printf("Código da carta: %s\n", codigo_carta);
        printf("País: %s\n", nome_pais);
        printf("Número de habitantes de %s: %lu\n", nome_pais, numero_habitantes);
        printf("Área de %s: %.2f\n", nome_pais, area);
        printf("Pib de %s: %.2f\n", nome_pais, pib);
        printf("Quantidade de pontos turísticos de %s: %d\n", nome_pais, pontos_turisticos);
        printf("Densidade populacional por km² de %s: %.2f\n", nome_pais, densidade_pop1);
        printf("Pib per capita de %s: %.2f\n", nome_pais, pib_capita1);

        // Carta 2
        
        printf("---- // ----\n");
        printf("carta 2\n");
        printf("---- // ----\n");
       
        printf("Carta 2 :\n");
        printf("Código da carta: %s\n", codigo_carta2);
        printf("País: %s\n", nome_pais2);
        printf("Número de habitantes de %s: %lu\n", nome_pais2, numero_habitantes2);
        printf("Área de %s: %.2f\n", nome_pais2, area2);
        printf("Pib de %s: %.2f\n", nome_pais2, pib2);
        printf("Quantidade de pontos turísticos de %s: %d\n", nome_pais2, pontos_turisticos2);
        printf("Densidade populacional por km² de %s: %.2f\n", nome_pais2, densidade_pop2);
        printf("Pib per capita de %s: %.2f\n", nome_pais2, pib_capita2); 

        printf("---- // ----\n");
        printf("Comparação de Cartas\n");
        printf("---- // ----\n");
       

        printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
        printf("Atributos : %s + %s\n", nomeAtributo1, nomeAtributo2);
        printf("%s: %.2f vs %s: %.2f\n", nome_pais, somaAtributos, nome_pais2, somaAtributos2);

        if (somaAtributos > somaAtributos2) {
            printf("*** Vencedor: Carta 1 - %s ***\n", nome_pais);
        } else if (somaAtributos < somaAtributos2) {
            printf("*** Vencedor: Carta 2 - %s ***\n", nome_pais2);
        } else {
            printf("*** Empate! ***\n");
        }

        return 0;
    }
        