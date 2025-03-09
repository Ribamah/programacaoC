#include <stdio.h>

    int main(){

        int populacaocarta_1;
        int numerodepontosturisticoscarta_1;
        int populacaocarta_2;
        int numerodepontosturisticoscarta_2;

        float areacarta_1;
        float pibcarta_1;
        float areacarta_2;
        float pibcarta_2;

        char estadocarta_1;
        char nomedacidadecarta_1;
        char codigodacarta_1;
        char estadocarta_2;
        char nomedacidadecarta_2;
        char codigodacarta_2;

        //Criação da carta 01

        printf("Super Trunfo \n\n");
        printf ("Carta 01 \n\n");

        printf("Estado: \n");
        scanf("%s", &estadocarta_1);

        printf("Código da Carta: \n");
        scanf("%s", &codigodacarta_1);

        printf("Nome da Cidade: \n");
        scanf("%s", &nomedacidadecarta_1);

        printf("População: \n");
        scanf("%d", &populacaocarta_1);

        printf("Área Total: \n");
        scanf("%f", &areacarta_1);

        printf("PIB da Cidade: \n");
        scanf("%f", &pibcarta_1);

        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &numerodepontosturisticoscarta_1);

        //Criação da Carta 02

        printf("Super Trunfo\n\n");
        printf ("Carta 02\n\n");

        printf("Estado: \n");
        scanf("%s", &estadocarta_2);

        printf("Código da Carta: \n");
        scanf("%s", &codigodacarta_2);

        printf("Nome da Cidade: \n");
        scanf("%s", &nomedacidadecarta_2);

        printf("População: \n");
        scanf("%d", &populacaocarta_2);

        printf("Área Total: \n");
        scanf("%f", &areacarta_2);

        printf("PIB da Cidade: \n");
        scanf("%f", &pibcarta_2);

        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &numerodepontosturisticoscarta_2);

        //Impressão dos dados Carta 01

        printf("Estado: %s\n", estadocarta_1);
        printf("Código da Carta: %s\n", codigodacarta_1);
        printf("Nome da Cidade: %s\n", nomedacidadecarta_1);
        printf("População da Cidade: %d\n", populacaocarta_1);
        printf("Área Total: %f\n", areacarta_1);
        printf("Pib da Cidade: %f\n", pibcarta_1);
        printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticoscarta_1);

        //Impressão de dados Carta 02

        printf("Estado: %s\n", estadocarta_2);
        printf("Código da Carta: %s\n", codigodacarta_2);
        printf("Nome da Cidade: %s\n", nomedacidadecarta_2);
        printf("População da Cidade: %d\n", populacaocarta_2);
        printf("Área Total: %f\n", areacarta_2);
        printf("Pib da Cidade: %f\n", pibcarta_2);
        printf("Número de Pontos Turísticos: %d\n", numerodepontosturisticoscarta_2);

        return 0;

        
    }













