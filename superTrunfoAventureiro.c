#include <stdio.h>
 
int main() {
    
    //iniciando variáveis carta 1
    char estado, codCarta[4], nomeCidade[50];
    int qtdPopulacao, numPontosTuristicos;
    float areaKM, PIB, densidadePopulacional, PIBperCapita;
    
    //iniciando variáveis carta 2
    char estado2, codCarta2[4], nomeCidade2[50];
    int qtdPopulacao2, numPontosTuristicos2;
    float areaKM2, PIB2, densidadePopulacional2, PIBperCapita2;
 
    //entrada e leitura de dados
    
    printf("==========================\n");
    printf("DESAFIO 1 - SUPER TRUNFO\n");
    printf("==========================\n");
    
    printf("Dados da primeira carta ------------ \n");
    printf("Digite uma letra de A a H que represente o Estado: ");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta (Letra do estado seguida de 01 a 04 (como A01, G04): ");
    scanf("%s", codCarta);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite a quantidade de habitantes dessa cidade: ");
    scanf("%d", &qtdPopulacao);
    
    printf("Digite a área(em KM²) da regiao: ");
    scanf("%f", &areaKM);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);
    
    printf("Digite a quantidade de pontos turísticos que há nessa cidade:");
    scanf("%d", &numPontosTuristicos);
    
    //separação para organização
    printf("==========================\n");

    
    printf("Dados da segunda carta ------------ \n");
    printf("Digite uma letra de A a H que represente o Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (Letra do estado seguida de 01 a 04 (como A01, G04): ");
    scanf("%s", codCarta2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("Digite a quantidade de habitantes dessa cidade: ");
    scanf("%d", &qtdPopulacao2);
    
    printf("Digite a área(em KM²) da regiao: ");
    scanf("%f", &areaKM2);
    
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);
    
    printf("Digite a quantidade de pontos turísticos que há nessa cidade:");
    scanf("%d", &numPontosTuristicos2);
 

    //cálculo da densidade populacional e PIB per capita para carta 1
    densidadePopulacional = qtdPopulacao / areaKM;
    PIBperCapita = PIB / qtdPopulacao;

    //cálculo da densidade populacional e PIB per capita para carta 2
    densidadePopulacional2 = qtdPopulacao2 / areaKM2;   
    PIBperCapita2 = PIB2 / qtdPopulacao2;
    
    //saída estruturada conforme solicitado na atividade
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", qtdPopulacao);
    printf("Área: %.2f km²\n", areaKM);
    printf("PIB: %.2f \n", PIB);
    printf("Número de Pontos Turisticos: %d \n", numPontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f \n\n", PIBperCapita);
    
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", qtdPopulacao2);
    printf("Área: %.2f km²\n", areaKM2);
    printf("PIB: %.2f \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n\n", PIBperCapita2);
    
    return 0;
}