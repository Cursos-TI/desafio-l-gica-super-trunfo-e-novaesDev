#include <stdio.h>

int main () {
    /*
        Para diferenciação, foi usado o mesmo nome de variavel de forma clara
        mas mudando somente a numeração no final, após o underline, para diferenciar as informações 
        da primeira carta, da segunda carta.
        Por exemplo, para a carta um, será estado_cidade_1, e para a carta dois, estado_cidade_2
    */

    // Informações da cidade 1
    // PRIMEIRA CARTA
    char estado_cidade_1[50]; // Um estado do Brasil da primeira carta
    char codigo_carta_1[4]; // O código da primeira carta
    char nome_cidade_1[100]; // Nome da cidade da primeira carta
    int populacao_cidade_1; // A quantidade da população da pimeira cidade
    float area_cidade_1; // A área em quilômetros quadrados da cidade da primeira carta
    float pib_cidade_1; // O PIB da cidade da primeira carta 
    int pontos_turisticos_cidade_1; // Números de pontos turisticos da cidade da primeira carta
    float densidade_populacional_cidade_1; // A Densidade Populacional da cidade da primeira carta
    float inverso_densidade_populacional_cidade_1; // O calculo do inverso da densidade populacional, para o calculo do Super Poder da primeira carta
    float pib_per_capita_cidade_1; // O PIB per Capita da cidade da primeira carta
    float super_poder_cidade_1; // O Super Poder da primeira carta

    // Informações da cidade 2
    // SEGUNDA CARTA
    char estado_cidade_2[50]; // Um estado do Brasil da segunda carta
    char codigo_carta_2[4]; // O código da segunda carta
    char nome_cidade_2[100]; // Nome da cidade da segunda carta
    int populacao_cidade_2; // A quantidade da população da segunda cidade
    float area_cidade_2; // A área em quilômetros quadrados da cidade da segunda carta
    float pib_cidade_2; // O PIB da cidade da segunda carta 
    int pontos_turisticos_cidade_2; // Números de pontos turisticos da cidade da segunda carta
    float densidade_populacional_cidade_2; // A Densidade Populacional da cidade da segunda carta
    float inverso_densidade_populacional_cidade_2; // O calculo do inverso da densidade populacional, para o calculo do Super Poder da segunda carta
    float pib_per_capita_cidade_2; // O PIB per Capita da cidade da segunda carta
    float super_poder_cidade_2; // O Super Poder da segunda carta

    // Variavel para comparação entre as cartas
    char resultado_populacao[30]; // Resultado da comparação entre as populacões das Cartas 1 e 2

    printf("Bem-vindo! Cadastre suas cartas do jogo Super Trunfo!\n");
    
    // Momento do cadastro da primeira carta pelo o usuário, inserindo as informações pedidas
    printf("\nCadastre a primeira carta do jogo.\n");
    printf("---------------------------------------------------------------\n");
    printf("Escreva abaixo, primeiramente, o nome de um estado do Brasil, para a primeira carta:\n");
    scanf("%s", &estado_cidade_1);

    printf("\nEscreva abaixo, o código desta primeira carta (Ex.: A01, B03... Primeiro a letra, sendo A ou B, e depois um número de 01 a 04):\n");
    scanf("%s", &codigo_carta_1);

    printf("\nEscreva abaixo, o nome da cidade desta primeira carta, que pertence à %s:\n", estado_cidade_1);
    scanf("%s", &nome_cidade_1);

    printf("\nEscreva abaixo, a população de %s:\n", nome_cidade_1);
    scanf("%d", &populacao_cidade_1);

    printf("\nEscreva abaixo, a área da cidade de %s, em quilômetros quadrados:\n", nome_cidade_1);
    scanf("%f", &area_cidade_1);

    printf("\nEscreva abaixo, o PIB de %s, em bilhões de reais:\n", nome_cidade_1);
    scanf("%f", &pib_cidade_1);

    printf("\nPor fim, escreva o número de pontos turísticos presentes em %s:\n", nome_cidade_1);
    scanf("%d", &pontos_turisticos_cidade_1);
    
    printf("---------------------------------------------------------------\n");
    printf("Primeira carta cadastrada com sucesso!\n");
    printf("---------------------------------------------------------------\n");
    // Fim do cadastro da primeira carta
    // Agora com as informações insiridas, o programa vai calcular a Densidade Populacional e o PIB per Capita da primeria carta

    // Calcular Densidade Populacional da primeira cidade
    densidade_populacional_cidade_1 = (float) populacao_cidade_1 / area_cidade_1;

    // Calcular PIB per Capita da primeira cidade
    /*
        Fazemos o pib da cidade da carta vezes 1000000000.0 para que,
        converta o valor digitado que seria por exemplo, 699.28, para 
        um valor em bilhão para que seja realizavel a divisao; e não de
        um resultado minusculo, como seria sem essa multiplicação, 
        sendo neste caso por exemplo, 0.000056.
    */
    pib_per_capita_cidade_1 = (float) (pib_cidade_1 * 1000000000.0) / populacao_cidade_1;

    // Uma quebra de linha média, para melhor visualização do cadastro da segunda carta
    printf("\n\n");

    // Momento do cadastro da segunda carta pelo o usuário, inserindo as informações pedidas
    printf("Agora, cadastre a segunda carta do jogo.\n");
    printf("---------------------------------------------------------------\n");
    printf("Escreva abaixo, primeiramente, o nome de um estado do Brasil, para a segunda carta:\n");
    scanf("%s", &estado_cidade_2);

    printf("\nEscreva abaixo, o código desta segunda carta (Ex.: A01, B03... Primeiro a letra, sendo A ou B, e depois um número de 01 a 04):\n");
    scanf("%s", &codigo_carta_2);

    printf("\nEscreva abaixo, o nome da cidade desta segunda carta, que pertence à %s:\n", estado_cidade_2);
    scanf("%s", &nome_cidade_2);

    printf("\nEscreva abaixo, a população de %s:\n", nome_cidade_2);
    scanf("%d", &populacao_cidade_2);

    printf("\nEscreva abaixo, a área da cidade de %s, em quilômetros quadrados:\n", nome_cidade_2);
    scanf("%f", &area_cidade_2);

    printf("\nEscreva abaixo, o PIB de %s, em bilhões de reais:\n", nome_cidade_2);
    scanf("%f", &pib_cidade_2);

    printf("\nPor fim, escreva o número de pontos turísticos presentes em %s:\n", nome_cidade_2);
    scanf("%d", &pontos_turisticos_cidade_2);
    
    printf("---------------------------------------------------------------\n");
    printf("Segunda carta cadastrada com sucesso!\n");
    printf("---------------------------------------------------------------\n");
    // Fim do cadastro da segunda carta carta
    // Agora com as informações insiridas, o programa vai calcular a Densidade Populacional e o PIB per Capita da segunda carta

    // Calcular Densidade Populacional da primeira cidade
    densidade_populacional_cidade_2 = (float) populacao_cidade_2 / area_cidade_2;

    // Calcular PIB per Capita da primeira cidade
    // Mesma conversão para bilhão real, o valor do pib, multiplicando por 1000000000.0
    pib_per_capita_cidade_2 = (float) (pib_cidade_2 * 1000000000.0) / populacao_cidade_2;

    // Calculando antes do Super Poder, o inverso da densidade populacional, para assim fazer o calculo do Super Poder
    // Carta 1
    inverso_densidade_populacional_cidade_1 = 1.0 / densidade_populacional_cidade_1;

    // Carta 2
    inverso_densidade_populacional_cidade_2 = 1.0 / densidade_populacional_cidade_2;

    // Agora, somamos o Super Poder das cartas, que é a soma de todos os atributos numéricos de cada uma
    // Super Poder da primeira carta
    super_poder_cidade_1 = (float) 
        populacao_cidade_1 +
        area_cidade_1 +
        pib_cidade_1 +
        pontos_turisticos_cidade_1 +
        pib_per_capita_cidade_1 +
        inverso_densidade_populacional_cidade_1
    ;

    // Super Poder da segunda carta
    super_poder_cidade_2 = (float) 
        populacao_cidade_2 +
        area_cidade_2 +
        pib_cidade_2 +
        pontos_turisticos_cidade_2 +
        pib_per_capita_cidade_2 +
        inverso_densidade_populacional_cidade_2
    ;

    // Uma quebra de linha grande, para melhor visualização das cartas
    printf("\n\n\n");

    // Agora o usuário vai para o momento de ver as duas cartas cadastradas
    
    // Visualização das cartas cadastradas
    printf("--------------------------------------------------------------------\n");
    printf("Cartas cadastradas no sistema:\n");
    printf("--------------------------------------------------------------------\n");

    // Carta 1
    printf("\nCARTA 1\n");
    printf("----------------------------------------\n");
    printf("ESTADO: %s\n", estado_cidade_1);
    printf("CÓDIGO: %s\n", codigo_carta_1);
    printf("NOME DA CIDADE: %s\n", nome_cidade_1);
    printf("POPULAÇÃO TOTAL: %d\n", populacao_cidade_1);
    printf("ÁREA TOTAL: %.2f KM²\n", area_cidade_1);
    printf("PIB: %.2f BILHÕES DE REAIS\n", pib_cidade_1);
    printf("NÚMEROS DE PONTOS TURÍSTICOS: %d\n", pontos_turisticos_cidade_1);
    printf("DENSIDADE POPULACIONAL: %.2f HAB/KM²\n", densidade_populacional_cidade_1);
    printf("PIB PER CAPITA: %.2f REAIS\n", pib_per_capita_cidade_1);
    printf("----------------------------------------\n");
    printf("SUPER PODER: %f\n", super_poder_cidade_1);
    printf("----------------------------------------\n");

    // Carta 2
    printf("\nCARTA 2\n");
    printf("----------------------------------------\n");
    printf("ESTADO: %s\n", estado_cidade_2);
    printf("CÓDIGO: %s\n", codigo_carta_2);
    printf("NOME DA CIDADE: %s\n", nome_cidade_2);
    printf("POPULAÇÃO TOTAL: %d\n", populacao_cidade_2);
    printf("ÁREA TOTAL: %.2f KM²\n", area_cidade_2);
    printf("PIB: %.2f BILHÕES DE REAIS\n", pib_cidade_2);
    printf("NÚMEROS DE PONTOS TURÍSTICOS: %d\n", pontos_turisticos_cidade_2);
    printf("DENSIDADE POPULACIONAL: %.2f HAB/KM²\n", densidade_populacional_cidade_2);
    printf("PIB PER CAPITA: %.2f REAIS\n", pib_per_capita_cidade_2);
    printf("----------------------------------------\n");
    printf("SUPER PODER: %f\n", super_poder_cidade_2);
    printf("----------------------------------------\n\n\n");

    // Agora o usuário vai ver as comparações entre as cartas

    // Mostrando agora, os resultados das comparações entre as cartas
    printf("--------------------------------------------------------------------\n");
    printf("COMPARAÇÃO ENTRE AS CARTAS (ATRIBUTO: POPULAÇÃO)\n");
    printf("--------------------------------------------------------------------\n\n");

    // Método de comparação entre as cartas
    if (populacao_cidade_1 > populacao_cidade_2) {
        /*
            Usando "strcpy" para poder definir a variavel resultado população,
            pois é usada para copiar o conteudo de um texto (string),
            para uma variavel do tipo array de caracteres
        */
        strcpy(resultado_populacao, "CARTA 1 VENCEU!");
    } else {
        strcpy(resultado_populacao, "CARTA 2 VENCEU!");
    }

    printf("-----------------------------------------------\n");
    printf("POPULAÇÃO CARTA 1 [%s] - %s: %d\n", codigo_carta_1, nome_cidade_1, populacao_cidade_1);
    printf("POPULAÇÃO CARTA 2 [%s] - %s: %d\n", codigo_carta_2, nome_cidade_2, populacao_cidade_2);
    printf("-----------------------------------------------\n");
    printf("RESULTADO: %s\n", resultado_populacao);
    printf("-----------------------------------------------\n\n");

    return 0;
}