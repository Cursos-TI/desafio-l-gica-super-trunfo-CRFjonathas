#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado_1,estado_2;
    char codigo_2[5], codigo_1[5];
    char cidade_1[50], cidade_2[50];
    unsigned long int populacao_1, populacao_2;   
    float area_1, area_2, pib_1, pib_2;
    int  pontos_turisticos_1, pontos_turisticos_2;

    int atributo_1, atributo_2;
    
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    printf("REGRAS:\n");
    printf("\n- Cada país será dividido em 8 estados (identificadas pelas letras A a H).\n");
    printf("- Cada estado terá 4 cidades (numerados de 1 a 4).\n");
    printf("- A combinação de letras e números formarão o código da carta.\n ");
    printf("\nEXEMPLO: A01; A02; B01; B02...\n");
    printf(" \n");    
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)


    // DADOS DA CARTA 1:

    printf("\nDigite os dados para a Carta 1: \n");
    printf(" \n");
    printf("\nEstado (A a H): ");
    scanf(" %c", &estado_1);
    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo_1);

    printf("Nome da cidade: ");

    //limpar buffer de entrada
    getchar(); // isso consome o '\n' que sobra apos o scanf

    fgets(cidade_1, sizeof(cidade_1), stdin); //ler o nome da cidade
    cidade_1[strcspn(cidade_1, "\n")] = 0; // remover o caractere de nova linha
    
    printf("População: ");
    scanf("%lu", &populacao_1);
    printf("Área: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_1);

    // DADOS DA CARTA 2:

    printf("\nDigite os dados para a Carta 2: \n");
    printf(" \n");
    printf("\nEstado (A a H): ");
    scanf(" %c", &estado_2);
    printf("Código da carta (ex: B02): ");
    scanf("%s", codigo_2);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade_2, 50, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;
    
    printf("População: ");
    scanf("%lu", &populacao_2);
    printf("Área: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Número de Pontos Turisticos: ");
    scanf("%d",&pontos_turisticos_2);

     //calculo densidade populacional e pib per capita:

     float densidade_pop_1 = (float)populacao_1 / area_1;
     float pib_per_capita_1 =  pib_1 * 1000000000 / populacao_1; //PIB em bilhões de reais
     float densidade_pop_2 = (float)populacao_2 / area_2;    
     float pib_per_capita_2 =  pib_2 * 1000000000 / populacao_2; //PIB em bilhões de reais
 
     //calculo do super poder:
 
     float super_poder_1 = populacao_1 + area_1 + (pib_1 * 1000000000) + pontos_turisticos_1 + pib_per_capita_1 + (1 / densidade_pop_1);
     float super_poder_2 = populacao_2 + area_2 + (pib_2 * 1000000000) + pontos_turisticos_2 + pib_per_capita_2 + (1 / densidade_pop_2);

    //exibição dos dados da carta:

    printf("\nCARTA 1:\n");
    printf("\nESTADO: %c\n", estado_1);
    printf("CÓDIGO: %s\n", codigo_1 );
    printf("CIDADE: %s\n",cidade_1 );
    printf("POPULAÇÃO: %lu habitantes\n",populacao_1 );
    printf("ÁREA: %.2f km²\n",area_1 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_1 );
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n",pontos_turisticos_1 );
    printf("Densidade Populacional: %.2f hab/Km².\n", densidade_pop_1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_1);
    printf("SUPER PODER: %.2f\n", super_poder_1);

    printf("\nCARTA 2:\n");
    printf("\nESTADO: %c\n", estado_2);
    printf("CÓDIGO: %s\n", codigo_2 );
    printf("CIDADE: %s\n",cidade_2 );
    printf("POPULAÇÃO: %lu habitantes\n",populacao_2 );
    printf("ÁREA: %.2f km²\n",area_2 );
    printf("PIB: R$ %.2f BILHÕES\n",pib_2 );
    printf("PONTOS TURISTICOS: %d\n",pontos_turisticos_2 );
    printf("Densidade Populacional: %.2f hab/Km².\n", densidade_pop_2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_2);
    printf("SUPER PODER: %.2f\n", super_poder_2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // MENU INTERATIVO PARA COMPARAÇÃO DOS ATRIBUTOS:

    printf("\n\nSELECIONE O PRIMEIRO ATRIBUTO VOCÊ QUER COMPARAR: \n\n");
    printf("1. POPULAÇÃO \n");
    printf("2. ÁREA \n");
    printf("3. PIB \n");
    printf("4. PONTOS  TURISTICOS \n");
    printf("5. DENSIDADE POPULACIONAL \n");
    printf("6. PIB PER CAPITA \n");
    printf("7. SUPER PODER \n\n");
    printf("OPÇÃO: ");
    scanf("%d", &atributo_1);

    //exibição da comparação dos atributos com  switch, if, else if, else:

    printf("\n\nCOMPARAÇÃO DE CARTAS:\n");

    switch (atributo_1){
        case 1:

            printf("\nAtributo: População\n\n");
            printf("Carta 1 - %s: %d\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %d\n", cidade_2, populacao_2);

            valor1_carta1 = populacao_1; valor1_carta2 = populacao_2; //Atribuido valores coforme atributos

            break;

        case 2:
            printf("\n\nAtributo: Área\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, area_2);

            valor1_carta1 = area_1; valor1_carta2 = area_2;

            break;

        case 3:
            printf("\n\nAtributo: PIB\n\n");
            printf("Carta 1 - %s: R$ %.2f BILHÕES\n", cidade_1, pib_1);
            printf("Carta 2 - %s: R$ %.2f BILHÕES\n", cidade_2, pib_2);

            valor1_carta1 = pib_1; valor1_carta2 = pib_2;

            break;

        case 4:
            printf("\n\nAtributo: Pontos Turisticos\n\n");
            printf("Carta 1 - %s: %d\n", cidade_1, pontos_turisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontos_turisticos_2);

            valor1_carta1 = pontos_turisticos_1; valor1_carta2 = pontos_turisticos_2;

            break;

        case 5:
            printf("\n\nAtributo: Densidade Populacional\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, densidade_pop_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, densidade_pop_2);

            valor1_carta1 = densidade_pop_1; valor1_carta2 = densidade_pop_2;

            break;

        case 6:
            printf("\n\nAtributo: PIB Per Capita\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, pib_2);

            valor1_carta1 = pib_per_capita_1; valor1_carta2 = pib_per_capita_2;

            break;

        case 7:
            printf("\n\nAtributo: Super Poder\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, super_poder_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, super_poder_2);

            valor1_carta1 = super_poder_1; valor1_carta2 = super_poder_2;

            break;

        default:
            printf("\nOPÇÃO INVALIDA. TENTE NOVAMENTE!\n");
            break;
    }

    //SEGUNDO MENU INTERATIVO:

    printf("\n\nSELECIONE O SEGUNDO ATRIBUTO VOCÊ QUER COMPARAR: \n\n");
    printf("1. POPULAÇÃO \n");
    printf("2. ÁREA \n");
    printf("3. PIB \n");
    printf("4. PONTOS  TURISTICOS \n");
    printf("5. DENSIDADE POPULACIONAL \n");
    printf("6. PIB PER CAPITA \n");
    printf("7. SUPER PODER \n\n");
    printf("OPÇÃO: ");
    scanf("%d", &atributo_2);

    //COMPARAÇAO DO SEGUNDO ATRIBUTO:

    if (atributo_1 == atributo_2){
        printf("Você escolheu o mensmo atributo!");
    } else{ 
        switch (atributo_2){
        case 1:

            printf("\nAtributo: População\n\n");
            printf("Carta 1 - %s: %d\n", cidade_1, populacao_1);
            printf("Carta 2 - %s: %d\n", cidade_2, populacao_2);

            valor2_carta1 = populacao_1; valor2_carta2 = populacao_2; //Atribuido valores coforme atributos

            break;

        case 2:
            printf("\n\nAtributo: Área\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, area_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, area_2);

            valor2_carta1 = area_1; valor2_carta2 = area_2;

            break;

        case 3:
            printf("\n\nAtributo: PIB\n\n");
            printf("Carta 1 - %s: R$ %.2f BILHÕES\n", cidade_1, pib_1);
            printf("Carta 2 - %s: R$ %.2f BILHÕES\n", cidade_2, pib_2);

            valor2_carta1 = pib_1; valor2_carta2 = pib_2;

            break;

        case 4:
            printf("\n\nAtributo: Pontos Turisticos\n\n");
            printf("Carta 1 - %s: %d\n", cidade_1, pontos_turisticos_1);
            printf("Carta 2 - %s: %d\n", cidade_2, pontos_turisticos_2);

            valor2_carta1 = pontos_turisticos_1; valor2_carta2 = pontos_turisticos_2;

            break;

        case 5:
            printf("\n\nAtributo: Densidade Populacional\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, densidade_pop_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, densidade_pop_2);

            valor2_carta1 = densidade_pop_1; valor2_carta2 = densidade_pop_2;

            break;

        case 6:
            printf("\n\nAtributo: PIB Per Capita\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, pib_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, pib_2);

            valor2_carta1 = pib_per_capita_1; valor2_carta2 = pib_per_capita_2;

            break;

        case 7:
            printf("\n\nAtributo: Super Poder\n\n");
            printf("Carta 1 - %s: %.2f\n", cidade_1, super_poder_1);
            printf("Carta 2 - %s: %.2f\n", cidade_2, super_poder_2);
            
            valor2_carta1 = super_poder_1; valor2_carta2 = super_poder_2;

            break;

        default:
            printf("\nOPÇÃO INVALIDA. TENTE NOVAMENTE!\n");
            break;
    }
       
    }

    // Ajuste para densidade (menor é melhor)
    float resultado_1 = (atributo_1 == 5) ? (1 / valor1_carta1) : valor1_carta1;
    float resultado_2 = (atributo_1 == 5) ? (1 / valor1_carta2) : valor1_carta2;

    float resultado_3 = (atributo_2 == 5) ? (1 / valor2_carta1) : valor2_carta1;
    float resultado_4 = (atributo_2 == 5) ? (1 / valor2_carta2) : valor2_carta2;

    float soma_carta1 = resultado_1 + resultado_3;
    float soma_carta2 = resultado_2 + resultado_4;

    //Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");

    printf("\nCarta 1 (%s):\n", cidade_1);
    printf("Atributo 1: %.2f\n", resultado_1);
    printf("Atributo 2: %.2f\n", resultado_3);
    printf("SOMA: %.2f\n", soma_carta1);

    printf("\nCarta 2 (%s):\n", cidade_2);
    printf("Atributo 1: %.2f\n", resultado_2);
    printf("Atributo 2: %.2f\n", resultado_4);
    printf("SOMA: %.2f\n", soma_carta2);

    // Resultado final com operador ternário
    printf("\nResultado Final: ");
    soma_carta1 > soma_carta2 ? printf("Carta 1 (%s) venceu!\n", cidade_1) :
    soma_carta2 > soma_carta1 ? printf("Carta 2 (%s) venceu!\n", cidade_2) :
    printf("Empate!\n");
    
    return 0;

}