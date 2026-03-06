#include <stdio.h>
#include <string.h>

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
    unsigned int populacao_cidade_1; // A quantidade da população da pimeira cidade
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
    unsigned int populacao_cidade_2; // A quantidade da população da segunda cidade
    float area_cidade_2; // A área em quilômetros quadrados da cidade da segunda carta
    float pib_cidade_2; // O PIB da cidade da segunda carta 
    int pontos_turisticos_cidade_2; // Números de pontos turisticos da cidade da segunda carta
    float densidade_populacional_cidade_2; // A Densidade Populacional da cidade da segunda carta
    float inverso_densidade_populacional_cidade_2; // O calculo do inverso da densidade populacional, para o calculo do Super Poder da segunda carta
    float pib_per_capita_cidade_2; // O PIB per Capita da cidade da segunda carta
    float super_poder_cidade_2; // O Super Poder da segunda carta

    // Variaveis da comparação entre os atributos das cartas 1 e 2
    int escolha1; // A escolha do primeiro atributo de comparação o usuário deseja
    int escolha2; // A escolha do segundo atributo de comparação o usuário deseja

    int resultado1; // O resultado da primeira comparação do primeiro atributo escolhido
    int resultado2; // O resultado da segunda comparação do segundo atributo escolhido
    char vencedor_atributo1[50]; // Guarda qual carta foi a vencedora na comparação no primeiro atributo
    char vencedor_atributo2[50]; // Guarda qual carta foi a vencedora na comparação no segundo atributo

    char resultado_comparacao[50]; // Resultado da comparação entre as cartas de acordo com o atributo escolhido

    char atributo_selecionado1[50]; // O primeiro atributo selecionado para fazer a comparação, para mostrar ao final para o usuário
    char atributo_selecionado2[50]; // O segundo atributo selecionado para fazer a comparação, para mostrar ao final para o usuário

    char atributo_1_informacoes_carta_1[50]; // Informações da primeira carta e a quantidade do primeiro atributo selecionado da primeira carta para fazer a comparação com o segundo atributo, para mostrar ao final para o usuário
    char atributo_1_informacoes_carta_2[50]; // Informações da segunda carta e a quantidade do primeiro atributo selecionado da segunda carta para fazer a comparação com o segundo atributo, para mostrar ao final para o usuário
    char atributo_2_informacoes_carta_1[50]; // Informações da primeira carta e a quantidade do segundo atributo selecionado da primeira carta para fazer a comparação com o primeiro atributo, para mostrar ao final para o usuário
    char atributo_2_informacoes_carta_2[50]; // Informações da segunda carta e a quantidade do segundo atributo selecionado da segunda carta para fazer a comparação com o primeiro atributo, para mostrar ao final para o usuário

    printf("Bem-vindo! Cadastre suas cartas do jogo Super Trunfo!\n");
    
    // Momento do cadastro da primeira carta pelo o usuário, inserindo as informações pedidas
    printf("\nCadastre a primeira carta do jogo.\n");
    printf("---------------------------------------------------------------\n");
    printf("Escreva abaixo, primeiramente, o nome de um estado do Brasil, para a primeira carta:\n");
    scanf("%s", estado_cidade_1);

    printf("\nEscreva abaixo, o código desta primeira carta (Ex.: A01, B03... Primeiro a letra, sendo A ou B, e depois um número de 01 a 04):\n");
    scanf("%s", codigo_carta_1);

    printf("\nEscreva abaixo, o nome da cidade desta primeira carta, que pertence à %s:\n", estado_cidade_1);
    // Foi colocado " %[^\n]" para ler os espaços assim podendo escrever cidades como "Rio de Janeiro"
    scanf(" %[^\n]", nome_cidade_1);

    printf("\nEscreva abaixo, a população de %s:\n", nome_cidade_1);
    scanf("%u", &populacao_cidade_1);

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
    scanf("%s", estado_cidade_2);

    printf("\nEscreva abaixo, o código desta segunda carta (Ex.: A01, B03... Primeiro a letra, sendo A ou B, e depois um número de 01 a 04):\n");
    scanf("%s", codigo_carta_2);

    printf("\nEscreva abaixo, o nome da cidade desta segunda carta, que pertence à %s:\n", estado_cidade_2);
    scanf(" %[^\n]", nome_cidade_2);

    printf("\nEscreva abaixo, a população de %s:\n", nome_cidade_2);
    scanf("%u", &populacao_cidade_2);

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
    printf("POPULAÇÃO TOTAL: %u\n", populacao_cidade_1);
    printf("ÁREA TOTAL: %.2f KM²\n", area_cidade_1);
    printf("PIB: %.2f BILHÕES DE REAIS\n", pib_cidade_1);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos_turisticos_cidade_1);
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
    printf("POPULAÇÃO TOTAL: %u\n", populacao_cidade_2);
    printf("ÁREA TOTAL: %.2f KM²\n", area_cidade_2);
    printf("PIB: %.2f BILHÕES DE REAIS\n", pib_cidade_2);
    printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos_turisticos_cidade_2);
    printf("DENSIDADE POPULACIONAL: %.2f HAB/KM²\n", densidade_populacional_cidade_2);
    printf("PIB PER CAPITA: %.2f REAIS\n", pib_per_capita_cidade_2);
    printf("----------------------------------------\n");
    printf("SUPER PODER: %f\n", super_poder_cidade_2);
    printf("----------------------------------------\n\n\n");

    // Agora o usuário vai escolher o atributo desejado para realizar as comparações entre as cartas
    printf("--------------------------------------------------------------------\n");
    printf("HORA DA COMPARAÇÃO ENTRE AS CARTAS\n");
    printf("A comparação será com a escolha de 2 atributos para assim determinar o vencedor.\n");
    printf("--------------------------------------------------------------------\n\n");

    // Menu principal para escolha do atributo
    printf("Escolha o primeiro atributo que deseja para haver a comparação com o segundo: \n");
    printf("----------------------------------------\n");
    printf("[1] - POPULAÇÃO\n");
    printf("[2] - ÁREA\n");
    printf("[3] - PIB\n");
    printf("[4] - NÚMERO DE PONTOS TURÍSTICOS\n");
    printf("[5] - DENSIDADE DEMOGRÁFICA\n");
    printf("[6] - SUPER PODER\n");
    printf("----------------------------------------\n");
    printf("[DIGITE O NÚMERO DO PRIMEIRO ATRIBUTO QUE DESEJA] > ");
    scanf("%d", &escolha1);

    // Usando switch-case para realizar a comparação de acordo com o atributo escolhido pelo usuário acima
    switch (escolha1)
    {
        // Caso escolha POPULAÇÃO
        case 1:
            // O método de comparação da população entre as cartas usando Operador Ternário
            resultado1 = populacao_cidade_1 > populacao_cidade_2 ? 1 : 0;

            // O método que vai mostrar para o usuário no final qual carta foi a vencedora neste primeiro atributo
            resultado1 == 1 ? strcpy(vencedor_atributo1, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo1, "Carta 2 venceu neste atributo!");

            /*
                Ao invés de colar o menuzinho de resultado em todos os cases,
                salvamos em variaveis, aonde só vai formatar no final com o
                resultado e as informações adicionais necessárias, otimizando
                mais o código, usando "strcpy" para pode definir o resultado na variavel do resultado,
                pois é usada para copiar o conteúdo de um texto (string),
                para uma variável do tipo array de caracteres.
                Assim, somente mostrando no final o resultado ao usuário
            */
            strcpy(atributo_selecionado1, "POPULAÇÃO");

            /*
                Usando "sprintf" para poder escrever na variavel uma string formatada,
                pois ele serve como o printf, mas em vez de exibir o texto na tela, 
                ele "imprime" o resultado formatado dentro do array de char, da
                minha variavel, assim salvando a quantidade do atributo da carta
                para mostrar no final
            */
            sprintf(atributo_1_informacoes_carta_1, "CARTA 1 [%s] - %s: %u\n", codigo_carta_1, nome_cidade_1, populacao_cidade_1);
            sprintf(atributo_1_informacoes_carta_2, "CARTA 2 [%s] - %s: %u\n", codigo_carta_2, nome_cidade_2, populacao_cidade_2);
            break;
        // Caso escolha ÁREA
        case 2:
            resultado1 = area_cidade_1 > area_cidade_2 ? 1 : 0;

            resultado1 == 1 ? strcpy(vencedor_atributo1, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo1, "Carta 2 venceu neste atributo!");

            strcpy(atributo_selecionado1, "ÁREA");

            sprintf(atributo_1_informacoes_carta_1, "CARTA 1 [%s] - %s: %.2f KM²\n", codigo_carta_1, nome_cidade_1, area_cidade_1);
            sprintf(atributo_1_informacoes_carta_2, "CARTA 2 [%s] - %s: %.2f KM²\n", codigo_carta_2, nome_cidade_2, area_cidade_2);
            break;
        // Caso escolha PIB
        case 3:
            resultado1 = pib_cidade_1 > pib_cidade_2 ? 1 : 0;

            resultado1 == 1 ? strcpy(vencedor_atributo1, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo1, "Carta 2 venceu neste atributo!");
            
            strcpy(atributo_selecionado1, "PIB");

            sprintf(atributo_1_informacoes_carta_1, "CARTA 1 [%s] - %s: %.2f BILHÕES DE REAIS\n", codigo_carta_1, nome_cidade_1, pib_cidade_1);
            sprintf(atributo_1_informacoes_carta_2, "CARTA 2 [%s] - %s: %.2f BILHÕES DE REAIS\n", codigo_carta_2, nome_cidade_2, pib_cidade_2);
            break;
        // Caso escolha NÚMERO DE PONTOS TURÍSTCOS
        case 4:
            resultado1 = pontos_turisticos_cidade_1 > pontos_turisticos_cidade_2 ? 1 : 0;

            resultado1 == 1 ? strcpy(vencedor_atributo1, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo1, "Carta 2 venceu neste atributo!");
            
            strcpy(atributo_selecionado1, "NÚMERO DE PONTOS TURÍSTICOS");

            sprintf(atributo_1_informacoes_carta_1, "CARTA 1 [%s] - %s: %d\n", codigo_carta_1, nome_cidade_1, pontos_turisticos_cidade_1);
            sprintf(atributo_1_informacoes_carta_2, "CARTA 2 [%s] - %s: %d\n", codigo_carta_2, nome_cidade_2, pontos_turisticos_cidade_2);
            break;
        // Caso escolha DENSIDADE DEMOGRÁFICA
        case 5:
            resultado1 = densidade_populacional_cidade_1 < densidade_populacional_cidade_2 ? 1 : 0;

            resultado1 == 1 ? strcpy(vencedor_atributo1, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo1, "Carta 2 venceu neste atributo!");
            
            strcpy(atributo_selecionado1, "DENSIDADE DEMOGRÁFICA");

            sprintf(atributo_1_informacoes_carta_1, "CARTA 1 [%s] - %s: %.2f HAB/KM²\n", codigo_carta_1, nome_cidade_1, densidade_populacional_cidade_1);
            sprintf(atributo_1_informacoes_carta_2, "CARTA 2 [%s] - %s: %.2f HAB/KM²\n", codigo_carta_2, nome_cidade_2, densidade_populacional_cidade_2);
            break;
        // Caso escolha SUPER PODER
        case 6:
            resultado1 = super_poder_cidade_1 > super_poder_cidade_2 ? 1 : 0;

            resultado1 == 1 ? strcpy(vencedor_atributo1, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo1, "Carta 2 venceu neste atributo!");

            strcpy(atributo_selecionado1, "SUPER PODER");

            sprintf(atributo_1_informacoes_carta_1, "CARTA 1 [%s] - %s: %f\n", codigo_carta_1, nome_cidade_1, super_poder_cidade_1);
            sprintf(atributo_1_informacoes_carta_2, "CARTA 2 [%s] - %s: %f\n", codigo_carta_2, nome_cidade_2, super_poder_cidade_2);
            break;
        default:
            printf("Opção inválida! Digite um dos números que estão disponíveis para escolha do primeiro atributo.");
            break;
    }

    // Menu de escolha do atributo 2
    printf("\n\nMuito bem, agora escolha o segundo atributo que deseja para haver a comparação com o primeiro: \n");
    printf("(Nas marcações no quadrado com X, seus número não podem ser mais usados). \n");
    printf("----------------------------------------\n");
    /*
        Para fazer um menu dinâmico, é usado o Operador Ternário e a função
        "strcmp" da biblioteca <string.h>, que serve para comparar o 
        conteúdo de duas strings, onde se forem iguais, ele retorna o valor "0",
        assim, usando o Operador Ternário, se voltar o valor "0", mostra que
        já foi selecionado, senão, mostra como uma possível escolha, pois
        esta função também traz se a primeira string é "menor", um valor menor que "0";
        e se a primeira string é "maior", um valor maior que "0"
    */
    strcmp(atributo_selecionado1, "POPULAÇÃO") == 0 ? printf("[X] - POPULAÇÃO < (Primeiro Atributo selecionado)\n") : printf("[1] - POPULAÇÃO\n");

    strcmp(atributo_selecionado1, "ÁREA") == 0 ? printf("[X] - ÁREA < (Primeiro Atributo selecionado)\n") : printf("[2] - ÁREA\n");

    strcmp(atributo_selecionado1, "PIB") == 0 ? printf("[X] - PIB < (Primeiro Atributo selecionado)\n") : printf("[3] - PIB\n");

    strcmp(atributo_selecionado1, "NÚMERO DE PONTOS TURÍSTICOS") == 0 ? printf("[X] - NÚMERO DE PONTOS TURÍSTICOS < (Primeiro Atributo selecionado)\n") : printf("[4] - NÚMERO DE PONTOS TURÍSTICOS\n");

    strcmp(atributo_selecionado1, "DENSIDADE DEMOGRÁFICA") == 0 ? printf("[X] - DENSIDADE DEMOGRÁFICA < (Primeiro Atributo selecionado)\n") : printf("[5] - DENSIDADE DEMOGRÁFICA\n");

    strcmp(atributo_selecionado1, "SUPER PODER") == 0 ? printf("[X] - SUPER PODER < (Primeiro Atributo selecionado)\n") : printf("[6] - SUPER PODER\n");

    printf("----------------------------------------\n");
    printf("[DIGITE O NÚMERO DO SEGUNDO ATRIBUTO QUE DESEJA] > ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("Escolha uma das opcões disponíveis no menu!\n");
        return 0; // Parar o programa, e fazer com que não leve "lixo" para terminar o programa nas comparações
    } else {
        switch (escolha2)
        {
            // Caso escolha, e esteja disponível, POPULAÇÃO
            case 1:
                resultado2 = populacao_cidade_1 > populacao_cidade_2 ? 1 : 0;

                // O método que vai mostrar para o usuário no final qual carta foi a vencedora neste segundo atributo
                resultado2 == 1 ? strcpy(vencedor_atributo2, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo2, "Carta 2 venceu neste atributo!");

                strcpy(atributo_selecionado2, "POPULAÇÃO");

                sprintf(atributo_2_informacoes_carta_1, "CARTA 1 [%s] - %s: %u\n", codigo_carta_1, nome_cidade_1, populacao_cidade_1);
                sprintf(atributo_2_informacoes_carta_2, "CARTA 2 [%s] - %s: %u\n", codigo_carta_2, nome_cidade_2, populacao_cidade_2);
                break;
            // Caso escolha ÁREA
            case 2:
                resultado2 = area_cidade_1 > area_cidade_2 ? 1 : 0;

                resultado2 == 1 ? strcpy(vencedor_atributo2, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo2, "Carta 2 venceu neste atributo!");

                strcpy(atributo_selecionado2, "ÁREA");

                sprintf(atributo_2_informacoes_carta_1, "CARTA 1 [%s] - %s: %.2f KM²\n", codigo_carta_1, nome_cidade_1, area_cidade_1);
                sprintf(atributo_2_informacoes_carta_2, "CARTA 2 [%s] - %s: %.2f KM²\n", codigo_carta_2, nome_cidade_2, area_cidade_2);
                break;
            // Caso escolha, e esteja disponível, PIB
            case 3:
                resultado2 = pib_cidade_1 > pib_cidade_2 ? 1 : 0;

                resultado2 == 1 ? strcpy(vencedor_atributo2, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo2, "Carta 2 venceu neste atributo!");

                strcpy(atributo_selecionado2, "PIB");

                sprintf(atributo_2_informacoes_carta_1, "CARTA 1 [%s] - %s: %.2f BILHÕES DE REAIS\n", codigo_carta_1, nome_cidade_1, pib_cidade_1);
                sprintf(atributo_2_informacoes_carta_2, "CARTA 2 [%s] - %s: %.2f BILHÕES DE REAIS\n", codigo_carta_2, nome_cidade_2, pib_cidade_2);
                break;
            // Caso escolha, e esteja disponível, NÚMERO DE PONTOS TURÍSTCOS
            case 4:
                resultado2 = pontos_turisticos_cidade_1 > pontos_turisticos_cidade_2 ? 1 : 0;

                resultado2 == 1 ? strcpy(vencedor_atributo2, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo2, "Carta 2 venceu neste atributo!");

                strcpy(atributo_selecionado2, "NÚMERO DE PONTOS TURÍSTCOS");

                sprintf(atributo_2_informacoes_carta_1, "CARTA 1 [%s] - %s: %d\n", codigo_carta_1, nome_cidade_1, pontos_turisticos_cidade_1);
                sprintf(atributo_2_informacoes_carta_2, "CARTA 2 [%s] - %s: %d\n", codigo_carta_2, nome_cidade_2, pontos_turisticos_cidade_2);
                break;
            // Caso escolha, e esteja disponível, DENSIDADE DEMOGRÁFICA
            case 5:
                resultado2 = densidade_populacional_cidade_1 < densidade_populacional_cidade_2 ? 1 : 0;

                resultado2 == 1 ? strcpy(vencedor_atributo2, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo2, "Carta 2 venceu neste atributo!");

                strcpy(atributo_selecionado2, "DENSIDADE DEMOGRÁFICA");

                sprintf(atributo_2_informacoes_carta_1, "CARTA 1 [%s] - %s: %.2f HAB/KM²\n", codigo_carta_1, nome_cidade_1, densidade_populacional_cidade_1);
                sprintf(atributo_2_informacoes_carta_2, "CARTA 2 [%s] - %s: %.2f HAB/KM²\n", codigo_carta_2, nome_cidade_2, densidade_populacional_cidade_2);
                break;
            // Caso escolha, e esteja disponível, SUPER PODER
            case 6:
                resultado2 = super_poder_cidade_1 > super_poder_cidade_2 ? 1 : 0;

                resultado2 == 1 ? strcpy(vencedor_atributo2, "Carta 1 venceu neste atributo!") : strcpy(vencedor_atributo2, "Carta 2 venceu neste atributo!");

                strcpy(atributo_selecionado2, "SUPER PODER");

                sprintf(atributo_2_informacoes_carta_1, "CARTA 1 [%s] - %s: %f\n", codigo_carta_1, nome_cidade_1, super_poder_cidade_1);
                sprintf(atributo_2_informacoes_carta_2, "CARTA 2 [%s] - %s: %f\n", codigo_carta_2, nome_cidade_2, super_poder_cidade_2);
                break;
            default:
                printf("Opção inválida! Digite um dos números que estão disponíveis para escolha do segundo atributo.");
                break;
        }
    }

    /*
        Definimos um vencedor comparando os atributos, e a cada vitória, é como se fosse um ponto.
        Para ganhar, a carta tem que ganhar no primeiro e segundo atributo; para empate, a carta
        tem que ganhar num dos atributos, sendo ou o primeiro ou o segundo, e perdendo no outro;
        e por fim, para a derrota, a carta nao pode ganhar em nenhum dos dois atributos, tanto
        o primeiro como o segundo.
        Por isso usamos o if-else para fazer essas comparações com o resultado
        da primeiro comparação do primeiro atributo, com o do segundo atributo.

        E para vencer, a carta 1 precisa ganhar nos dois atributos.
        Se cada carta ganhar um atributo, ocorre um empate.
        Se a carta 2 ganhar os dois atributos, ela vence.

        resultado = 1 significa vitória da carta 1 no atributo.
        resultado = 0 significa vitória da carta 2 no atributo.
    */
    // Vitória da primeira carta
    if (resultado1 && resultado2) {
        strcpy(resultado_comparacao, "Parabéns, Carta 1! Você venceu!");
    } else if (resultado1 != resultado2) {
        strcpy(resultado_comparacao, "Que coisa! Houve um empate!");
    }
    // Vitória da segunda carta 
    else {
        strcpy(resultado_comparacao, "Parabéns, Carta 2! Você venceu!");
    }
    
    printf("\n\n--------------------------------------------------------------------\n");
    printf("RESULTADO DAS COMPARAÇÕES!\n");
    printf("--------------------------------------------------------------------\n\n");

    // Agora fomatando as variveis aqui dentro e mostrando as informações da primeira e segunda carta e o resultado da comparação de cada atributo para o usuário
    printf("--------------------------------------------------------------\n");
    printf("PRIMEIRO ATRIBUTO DE COMPARAÇÃO USADO: %s.\n", atributo_selecionado1);
    printf("--------------------------------------------------------------\n");
    printf("%s", atributo_1_informacoes_carta_1);
    printf("%s", atributo_1_informacoes_carta_2);
    printf("#################**#################\n");
    printf("VENCEDOR NESTE PRIMEIRO ATRIBUTO: %s\n", vencedor_atributo1);
    printf("--------------------------------------------------------------\n\n");

    printf("--------------------------------------------------------------\n");
    printf("SEGUNDO ATRIBUTO DE COMPARAÇÃO USADO: %s.\n", atributo_selecionado2);
    printf("--------------------------------------------------------------\n");
    printf("%s", atributo_2_informacoes_carta_1);
    printf("%s", atributo_2_informacoes_carta_2);
    printf("#################**#################\n");
    printf("VENCEDOR NESTE SEGUNDO ATRIBUTO: %s\n", vencedor_atributo2);
    printf("--------------------------------------------------------------\n\n");

    printf("-----------------------------------------------\n");
    printf("RESULTADO: %s\n", resultado_comparacao);
    printf("-----------------------------------------------\n");

    return 0;
}