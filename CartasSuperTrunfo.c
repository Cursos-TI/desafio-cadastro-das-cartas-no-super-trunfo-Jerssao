#include <stdio.h>

int main() {
    //CARTA 1
    char estado_carta1[2];
    char codigo_carta1[4];
    char nome_cidade_carta1[20];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int n_pontos_carta1;

    //CARTA2
    char estado_carta2[2];
    char codigo_carta2[4];
    char nome_cidade_carta2[20];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int n_pontos_carta2;
    
    printf("-----------DADOS DA PRIMEIRA CARTA----------- \n");
    printf("Informe o estado da carta: \n");
    scanf("%s", estado_carta1);
    getchar();

    printf("Informe o código da carta: \n");
    scanf("%s", codigo_carta1);
    getchar();
    
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade_carta1);
    getchar();

    printf("Informe o numero de habitantes: \n");
    scanf(" %d", &populacao_carta1);
 
    printf("Informe a area de cidade em KM quadrados: \n");
    scanf(" %f", &area_carta1);

    printf("Informe o PIB da cidade: \n");
    scanf(" %f", &pib_carta1);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf(" %d", &n_pontos_carta1);
    printf("--------------------------------------------- \n");
    printf("Finalizado dados da primeira carta \n");
    printf("--------------------------------------------- \n");
    printf(" \n");

    printf("-----------DADOS DA SEGUNDA CARTA----------- \n");
    printf("Informe o estado da carta: \n");
    scanf("%s", estado_carta2);
    getchar();

    printf("Informe o código da carta: \n");
    scanf("%s", codigo_carta2);
    getchar();
    
    printf("Informe o nome da cidade: \n");
    scanf("%s", nome_cidade_carta2);
    getchar();

    printf("Informe o numero de habitantes: \n");
    scanf(" %d", &populacao_carta2);
 
    printf("Informe a area de cidade em KM quadrados: \n");
    scanf(" %f", &area_carta2);

    printf("Informe o PIB da cidade: \n");
    scanf(" %f", &pib_carta2);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf(" %d", &n_pontos_carta2);

    printf("--------------------------------------------- \n");
    printf("Finalizado dados da segunda carta \n");
    printf("--------------------------------------------- \n");
    printf(" \n");


    printf("-----------DADOS DA PRIMEIRA CARTA----------- \n");
    printf("Estado: %s\n", estado_carta1);
    printf("Codigo da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Area: %.2f \n", area_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Numero de pontos turisticos: %d\n", n_pontos_carta1);
    printf("--------------------------------------------- \n");

    printf("-----------DADOS DA SEGUNDA CARTA----------- \n");
    printf("Estado: %s\n", estado_carta2);
    printf("Codigo da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Area: %.2f \n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Numero de pontos turisticos: %d\n", n_pontos_carta2);
    printf("---------------------------------------------");

    return 0;
}
