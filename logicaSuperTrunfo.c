#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado, estado2, codigo_carta[4], codigo_carta2[4], nome_pais[51], nome_pais2[51];
  int pontos_turisticos, pontos_turisticos2, resultado, pais_vencedor, opcao;
  float area, area2, pib, pib2, densidade_pop1, densidade_pop2, pib_capita1, pib_capita2, superPoder1, superPoder2;
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

        // Menu onde o usuário selecionará qual atributo será comparado
        printf("*** Escolha o atributo que você deseja comparar: *** \n");
        printf("1) População\n");
        printf("2) Área\n");
        printf("3) PIB\n");
        printf("4) Quantidade de pontos turísticos\n");
        printf("5) Densidade demográfica\n");
        scanf(" %d", &opcao);


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
       
        switch (opcao)
        {
            case 1: 
            {
                if (numero_habitantes > numero_habitantes2) { 
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: População\n");
                    printf("População do país %s: %lu - População do país %s: %lu\n", nome_pais, numero_habitantes, nome_pais2, numero_habitantes2);
                    printf("*** Carta 1 venceu! ***\n");
                }   else if (numero_habitantes < numero_habitantes2)
                    {   
                        printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                        printf("Atributo que está sendo comparado: População\n");
                        printf("População do país %s: %lu - População do país %s: %lu\n", nome_pais, numero_habitantes, nome_pais2, numero_habitantes2);
                        printf("*** Carta 2 venceu! ***\n");
                    } else {
                        printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                        printf("Atributo que está sendo comparado: População\n");
                        printf("População do país %s: %lu - População do país %s: %lu\n", nome_pais, numero_habitantes, nome_pais2, numero_habitantes2);
                        printf("*** Empate! ***\n");
                    }    
                break; 
            }
            case 2: 
            {
                if (area > area2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Área\n");
                    printf("Área do país %s: %.2f - Área do país %s: %.2f\n", nome_pais, area, nome_pais2, area2);
                    printf("*** Carta 1 venceu! ***\n");
                } else if (area < area2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Área\n");
                    printf("Área do país %s: %.2f - Área do país %s: %.2f\n", nome_pais, area, nome_pais2, area2);
                    printf("*** Carta 2 venceu! ***\n");
                } else {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Área\n");
                    printf("Área do país %s: %.2f - Área do país %s: %.2f\n", nome_pais, area, nome_pais2, area2);
                    printf("*** Empate! ***\n");
                }
            break;  
            }
            case 3:
            {
                if (pib > pib2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: PIB\n");
                    printf("PIB do país %s: %.2f - PIB do país %s: %.2f\n", nome_pais, pib, nome_pais2, pib2);
                    printf("*** Carta 1 venceu! ***\n");
                }   else if (pib < pib2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: PIB\n");
                    printf("PIB do país %s: %.2f - PIB do país %s: %.2f\n", nome_pais, pib, nome_pais2, pib2);
                    printf("*** Carta 2 venceu! ***\n");
                } else {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: PIB\n");
                    printf("PIB do país %s: %.2f - PIB do país %s: %.2f\n", nome_pais, pib, nome_pais2, pib2);
                    printf("*** Empate! ***\n");
                }
            break;  
            }
            case 4:
            {
                if (pontos_turisticos > pontos_turisticos2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Quantidade de pontos turísticos\n");
                    printf("Qtd de pontos turísticos do país %s: %d - Qtd de pontos turísticos do país %s: %d\n", nome_pais, pontos_turisticos, nome_pais2, pontos_turisticos2);
                    printf("*** Carta 1 venceu! ***\n");
                }   else if (pontos_turisticos < pontos_turisticos2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Quantidade de pontos turísticos\n");
                    printf("Qtd de pontos turísticos do país %s: %d - Qtd de pontos turísticos do país %s: %d\n", nome_pais, pontos_turisticos, nome_pais2, pontos_turisticos2);
                    printf("*** Carta 2 venceu! ***\n");
                } else {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Quantidade de pontos turísticos\n");
                    printf("Qtd de pontos turísticos do país %s: %d - Qtd de pontos turísticos do país %s: %d\n", nome_pais, pontos_turisticos, nome_pais2, pontos_turisticos2);
                    printf("*** Empate! ***\n");
                } 
            break; 
            }
            case 5:
            {
                if (densidade_pop1 < densidade_pop2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Densidade demográfica\n");
                    printf("Densidade demográfica do país %s: %.2f - Densidade demográfica do país %s: %.2f\n", nome_pais, densidade_pop1, nome_pais2, densidade_pop2);
                    printf("*** Carta 1 venceu! ***\n");
                }   else if (densidade_pop1 > densidade_pop2)
                {
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Densidade demográfica\n");
                    printf("Densidade demográfica do país %s: %.2f - Densidade demográfica do país %s: %.2f\n", nome_pais, densidade_pop1, nome_pais2, densidade_pop2);
                    printf("*** Carta 2 venceu! ***\n");
                } else { 
                    printf("Carta 1 - %s vs Carta 2 %s\n", nome_pais, nome_pais2);
                    printf("Atributo que está sendo comparado: Densidade demográfica\n");
                    printf("Densidade demográfica do país %s: %.2f - Densidade demográfica do país %s: %.2f\n", nome_pais, densidade_pop1, nome_pais2, densidade_pop2);
                    printf("*** Empate ***!\n");
                }
            break;
            default :
                printf("Opção inválida!\n");  
            }
        }

    return 0;
}