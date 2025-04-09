#include <stdio.h>


int main() {

    //Declarando as variáveis

    char estado1[2];
    char codigo1[3];
    char nome_cidade1[20];
    int populacao_cidade1;
    float area_km2_cidade1;                                    
    float pib_cidade1;
    int pontos_turisticos1;

    char estado2[2];
    char codigo2[3];
    char nome_cidade2[20];
    int populacao_cidade2;
    float area_km2_cidade2;                                    
    float pib_cidade2;
    int pontos_turisticos2;
    

    //Coletando as informações da 
    // primeira carta

    printf("Digite o estado da primeira carta:\n");
    scanf("%s", estado1);                                         //%3s e %20s para delimitar o buffer 
                                                                   
    printf("Digite o código da primeira carta: \n");            
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %[^\n]", &nome_cidade1);                               // %[^\n] Para ler nomes compostos ex: São Paulo

    printf("Informe a população da primeira carta: \n");
    scanf("%d", &populacao_cidade1);

    printf("Informe a área em Km² da primeira carta: \n");
    scanf("%f", &area_km2_cidade1);

    printf("Informe o PIB da primeira carta: \n");
    scanf("%f", &pib_cidade1);

    printf("Informe o número de pontos turísticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

    //Exibindo as informações da primeira carta

    printf("Carta 1:\n ");
    printf("Estado: %s\n ",estado1);
    printf("Codigo: %3s\n ",codigo1);
    printf("Nome da Cidade: %s\n ",nome_cidade1);
    printf("População: %d\n ",populacao_cidade1);
    printf("Área: %.2f\n ",area_km2_cidade1);
    printf("PIB: %.2f\n ",pib_cidade1);
    printf("Pontos Turísticos: %d\n ",pontos_turisticos1);

    //Coletando as informações da 
    // segunda carta
    
   printf("\nDigite o estado da segunda carta: \n");
    scanf("%s", estado2);                                          
                                                                   
    printf("Digite o código da segunda carta: \n");                   //%3s e %20s para delimitar o buffer
    scanf("%3s", &codigo2);
                                                                      
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf(" %[^\n]", &nome_cidade2);                                   // %[^\n] Para ler nomes compostos ex: São Paulo

    printf("Informe a população da segunda carta: \n");
    scanf("%d", &populacao_cidade2);

    printf("Informe a área em Km² da segunda carta: \n");
    scanf("%f", &area_km2_cidade2);

    printf("Informe o PIB da segunda carta: \n");
    scanf("%f", &pib_cidade2);

    printf("Informe o número de pontos turísticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos2);

    //Exibindo as informações da segunda carta

    printf("Carta 2:\n ");
    printf("Estado: %s\n ",estado2);
    printf("Codigo: %3s\n ",codigo2);
    printf("Nome da Cidade: %s\n ",nome_cidade2);
    printf("População: %d\n ",populacao_cidade2);
    printf("Área: %.2f\n ",area_km2_cidade2);
    printf("PIB: %.2f\n ",pib_cidade2);
    printf("Pontos Turísticos: %d\n ",pontos_turisticos2);





    return 0;
}
