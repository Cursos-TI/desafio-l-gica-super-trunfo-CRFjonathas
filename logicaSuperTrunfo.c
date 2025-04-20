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
 
     float super_poder_1 = populacao_1 + area_1 + (pib_1 * 1000000000) + pontos_turisticos_1 + pib_per_capita_1 +(1 / densidade_pop_1);
     float super_poder_2 = populacao_2 + area_2 + (pib_2 * 1000000000) + pontos_turisticos_2 + pib_per_capita_2 +(1 / densidade_pop_2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
