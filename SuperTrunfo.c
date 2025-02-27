#include <stdio.h> 

int main (){

    printf("Desafio Super Trunfo \n");

    //variáveis para carta 1

    int pontosturisticos1;
    int populacao1;
    char estado1;
    char cidade1[50];
    char codigo1[50];
    float pib1;
    float area1;

    //variáveis para a carta 2

    int pontosturisticos2;
    int populacao2;
    char estado2;
    char cidade2[50];
    char codigo2[50];
    float pib2;
    float area2;

    //cadastro da carta 01
    printf("carta01\n");
    


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
    scanf("%d" , &pontosturisticos1);


    // Cadastro da Carta 2
    printf("carta02\n");



    //Imprimir e scanear dados do usuario da carta 02

    printf("Digite o estado da carta 2 (A a H):\n");
    scanf("%c" ,&estado2)

    printf("Digite o cídigo da carta 2: \n");
    scanf("%s" ,codigo2);


    //Mostar cartas cadastradas cidade 1

    printf("\n carta01 \n");

    printf("\n Estado: %c\n", estado1);
    printf("Código: %s\n" , codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n" , populacao1);
    printf("Área em km²: %.2f\n" ,area1);
    printf("PIB: %.2f\n" ,pib1);
    printf("Pontos Turísticos: %d\n" ,pontosturisticos1);

    //Mostrar cartas cadastradadas cidade 2

    printf("\n carta02\n");

    printf("\n Estado: %c\n", estado2);
    printf("Código: %s\n" , codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n" , populacao2);
    printf("Área em km²: %.2f\n" ,area2);
    printf("PIB: %.2f\n" ,pib2);
    printf("Pontos Turísticos: %d\n" ,pontosturisticos2);

    return 0;

    


}