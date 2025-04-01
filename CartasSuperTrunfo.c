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
    int pouplaçao1 = 12325000;
    float  kilomestros1  = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float densidade1;
    float capital1;


    //Carta 2
    char estado2[4];
    char cidade2[50];
    int pouplaçao2 = 6748000;
    float kilomestros2  = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float densidade2;
    float capital2;

    //Densidade da carta 1
    densidade1 = pouplaçao1 / kilomestros1;

     //Densidade da carta 2
    densidade2 = pouplaçao2 / kilomestros2;

    //PIB per Capita carta 1
    capital1 = pouplaçao1 / pib1;

    
    //PIB per Capita carta 2
    capital2 = pouplaçao2 / pib2;

    printf("Escolha uma carta A ou B: \n");
    scanf("")


    
    // Cadastro das Cartas: 
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
