#include <stdio.h> 

int main (){
    printf("Desafio Super Trunfo \n");

    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    int pontos1;
    float area1;
    float pib1;


    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    int pontos2;
    float area2;
    float pib2;

    //cadastro da carta 01
    printf("\ncarta 1\n");

    //Imprimir e scanear dados do usuario da carta 01

    printf("Digite o estado da carta 1: (A a H): \n");
    scanf("%c" , &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s" ,codigo1);

    printf("Digite o nome da cidade da carta 1 (tudojunto): \n");
    scanf("%s" ,cidade1);

    printf("Digite a população da cidade 1: \n");
    scanf("%d" ,&populacao1);

    printf("Digite a Área (em km²) da cidade 1: \n");
    scanf("%f" ,&area1);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f" ,&pib1);

    printf("Digite a quantidade de pontos turisticos da cidade 1: \n");
    scanf("%d" , &pontos1);


    // Cadastro da Carta 2
    printf("carta 2 \n");



    //Imprimir e scanear dados do usuario da carta 2


    printf("Digite o estado da carta 2 (A a H): \n");
    scanf("%s", &estado2);

    printf("Digite o cídigo da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2 (tudojunto):\n");
    scanf("%s", cidade2);

    printf("Digite a populaçao da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²) da cidade 2: \n ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da carta 2 \n\n\n\n");
    scanf("%d", &pontos2);

    //Mostar cartas cadastradas cidade 1

    printf("\n **CARTA 1**\n");

    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n" , codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n" , populacao1);
    printf("Área em km²: %.2f\n" ,area1);
    printf("PIB: %.2f\n" ,pib1);
    printf("Pontos Turísticos: %d\n" ,pontos1);

    //Mostrar cartas cadastradadas cidade 2

    printf("\n **CARTA 2**\n");

    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n" , codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área em km²: %.2f\n" ,area2);
    printf("PIB: %.2f\n" ,pib2);
    printf("Pontos Turísticos: %d\n" ,pontos2);

    return 0;

    


}