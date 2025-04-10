#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Carta 1
    char estado1[5];
    char cidade1[60];
    int populacao1 = 12325000;
    float  kilomestros1  = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float densidade1;
    float capital1;


    //Carta 2
    char estado2[4];
    char cidade2[50];
    int populacao2 = 6748000;
    float kilomestros2  = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float densidade2;
    float capital2;

    //Densidade da carta 1
    densidade1 = populacao1 / kilomestros1;

     //Densidade da carta 2
    densidade2 = populacao2 / kilomestros2;

    //PIB per Capita carta 1
    capital1 = populacao1 / pib1;

    
    //PIB per Capita carta 2
    capital2 = populacao2 / pib2;

    printf("Carta 1 \n");
    printf("Escolha um estado: \n");
    scanf("%s", &estado1);
    printf("Escolha uma cidade: \n");
    scanf("%s", &cidade1);
    printf("População do local escolido: \n");
    scanf("%d", &populacao1);
    printf("Territorio do local escolhido: \n");
    scanf("%f", &kilomestros1);
    printf("Pib do local escolhido: \n");
    scanf("%f", &pib1);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos1);
    printf("Densidade populacional: \n");
    scanf("%f", &densidade1);
    printf("Pib per capta: \n");
    scanf("%f", &capital1);
   
    printf("Carta 2 \n");
    printf("Escolha um estado: \n");
    scanf("%s", &estado2);
    printf("Escolha uma cidade: \n");
    scanf("%s", &cidade2);
    printf("População do local escolido: \n");
    scanf("%d", &populacao2);
    printf("Territorio do local escolhido: \n");
    scanf("%f", &kilomestros2);
    printf("Pib do local escolhido:  \n");
    scanf("%f", &pib2);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos2);
    printf("Densidade populacional: \n");
    scanf("%f", &densidade2);
    printf("Pib per capta: \n");
    scanf("%f", &capital2);

    
    
    // Cadastro das Cartas: 
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
