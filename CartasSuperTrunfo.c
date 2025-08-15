#include <stdio.h>

int main() {
//Aqui foi adicionado as variáveis que seriam utilizadas.
    char estado1[50], estado2[50], carta1[50], carta2[50], cidade1[50], cidade2[50];
    unsigned long int populaçao1, populaçao2;
    int turistico1, turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcapta1, pibcapta2, superpoder1, superpoder2, comparaçãoPopulação, comparaçãoArea, comparaçãoPib, comparaçãoTuristico, comparaçãoDensidade, comparaçãoPibpercapita, comparaçãoPoder;

//comecei a armazenar as respostas do usuário.
    printf("Estado: ");
    scanf("%s", &estado1);

    printf("Código da carta: ");
    scanf("%s", &carta1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%u", &populaçao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &turistico1);
    //Recolhendo informações de população, area e pib e divindo população por area e pib por população.
    densidade1 = (populaçao1 / area1);
    pibcapta1 = (pib1 / populaçao1);

    superpoder1 = (float)(populaçao1 + area1 + pib1 + turistico1 + pibcapta1 + densidade1);

//carta criada com sucesso, agora ira imprimir na tela as informações ao usuário.
    printf("Carta 01 criada com sucesso!\n");

    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu de habitantes.\n", populaçao1);
    printf("Área: %.2f  km²\n", area1);
    printf("PIB: %.2f reais.\n", pib1);
    printf("Pontos turísticos: %d\n", turistico1);
    //Divulgando informações sobre PIB per capita e Densidade populacional.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Pib per Capita: %.2f reais.\n", pibcapta1);

    printf("O SuperPoder da carta %s é igual a: %.2f\n", carta1, superpoder1);

//inicio da criação da segunda carta.
    printf("Agora crie a segunda carta!\n");

    printf("Estado: ");
    scanf("%s", &estado2);

    printf("Código da carta: ");
    scanf("%s", &carta2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%u", &populaçao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &turistico2);
    //Recolhendo informações de população, area e pib e divindo população por area e pib por população.
    densidade2 = (populaçao2 / area2);
    pibcapta2 = (pib2 / populaçao2);

    superpoder2 = (float)(populaçao2 + area2 + pib2 + turistico2 + pibcapta2 + densidade2);

//criada com sucesso, assim, expondo informações na tela do usuario.
    printf("Carta 02 criada com sucesso!\n");

    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu de habitantes.\n", populaçao2);
    printf("Área: %.2f  km²\n", area2);
    printf("PIB: %.2f reais.\n", pib2);
    printf("Pontos turísticos: %d\n", turistico2);
    //Divulgando informações sobre PIB per capita e Densidade populacional.
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Pib per Capita: %.2f reais.\n", pibcapta2);

    printf("O SuperPoder da carta %s é igual a: %.2f\n", carta2, superpoder2);

    comparaçãoPopulação = populaçao1 > populaçao2;
    comparaçãoArea = area1 > area2;
    comparaçãoPib = pib1 > pib2;
    comparaçãoTuristico = turistico1 > turistico2;
    comparaçãoDensidade = densidade1 < densidade2;
    comparaçãoPibpercapita = pibcapta1 > pibcapta2;
    comparaçãoPoder = superpoder1 > superpoder2;
    
    printf("*****Inicio das comparações*****\n");
    printf("A Carta Vencedora de Maior população é: %.0f\n", comparaçãoPopulação);
    printf("A Carta Vencedora de Maior Área é: %.0f\n", comparaçãoArea);
    printf("A Carta Vencedora de Maior PIB é: %.0f\n", comparaçãoPib);
    printf("A Carta Vencedora de Maior Pontos Turísticos é: %.0f\n", comparaçãoTuristico);
    printf("A Carta Vencedora de Menor Densidade Populacional é: %.0f\n", comparaçãoDensidade);
    printf("A Carta Vencedora de Maior PIB per Capita é: %.0f\n", comparaçãoPibpercapita);
    printf("A Carta Vencedora de Maior SuperPoder é: %.0f\n", comparaçãoPoder);

    printf("***Se tornando vencedora a carta que possuir mais pontos!***");

    return 0;

}