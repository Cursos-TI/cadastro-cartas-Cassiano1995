#include <stdio.h>

int main() {


   // Carta1
char estado1;
char codigo1[4];
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;


// Carta2
char estado2;
char codigo2[4];
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;


    printf("Bem vindo ao super-trunfo!!\n Preencha a seguir os dados da carta 1!! \n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", &nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);    

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    printf("\n\nAgora vamos preencher os dados da seugunda carta!!\n\n\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", &nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);    

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);



     //Exibição da carta1
    printf("\n\nCarta 1: \n Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2fkm\n", area1); 
    printf("PIB: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);


         //Exibição da carta2
    printf("\n\nCarta 2: \n Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm\n", area2); 
    printf("PIB: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);


    return 0;
    
}
