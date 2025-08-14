#include <stdio.h>

int main() {
//Aqui foi adicionado as variáveis que seriam utilizadas.
    char estado1[50], estado2[50], carta1[50], carta2[50], cidade1[50], cidade2[50];
    int populaçao1, populaçao2, turistico1, turistico2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pibcapta1, pibcapta2;

//comecei a armazenar as respostas do usuário.
    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Código da carta: ");
    scanf("%s", &carta1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populaçao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &turistico1);
    //Recolhendo informações de população, area e pib e divindo população por area e pib por população.
    densidade1 = (populaçao1 / area1);
    pibcapta1 = (pib1 / populaçao1);

//carta criada com sucesso, agora ira imprimir na tela as informações ao usuário.
    printf("Carta 01 criada com sucesso!\n");

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d de habitantes.\n", populaçao1);
    printf("Área: %.2f  km²\n", area1);
    printf("PIB: %.2f reais.\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);
    //Divulgando informações sobre PIB per capita e Densidade populacional.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per Capita: %.2f reais.\n", pibcapta1);

//inicio da criação da segunda carta.
    printf("Agora crie a segunda carta!\n");

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Código da carta: ");
    scanf("%s", &carta2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populaçao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &turistico2);
    //Recolhendo informações de população, area e pib e divindo população por area e pib por população.
    densidade2 = (populaçao2 / area2);
    pibcapta2 = (pib2 / populaçao2);

//criada com sucesso, assim, expondo informações na tela do usuario.
    printf("Carta 02 criada com sucesso!\n");

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d de habitantes.\n", populaçao2);
    printf("Área: %.2f  km²\n", area2);
    printf("PIB: %.2f reais.\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    //Divulgando informações sobre PIB per capita e Densidade populacional.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais.\n", pibcapta2);

    return 0;

}