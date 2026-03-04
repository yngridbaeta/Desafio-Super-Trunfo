#include <stdio.h>
 
int main() {
    
    //iniciando variáveis carta 1
    char estado, codCarta[5], nomeCidade[50];
    int qtdPopulacao, numPontosTuristicos;
    float areaKM, PIB, densidadePopulacional, PIBperCapita,superPoder;
    
    //iniciando variáveis carta 2
    char estado2, codCarta2[5], nomeCidade2[50];
    int qtdPopulacao2, numPontosTuristicos2;
    float areaKM2, PIB2, densidadePopulacional2, PIBperCapita2, superPoder2;
 
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

    //desafio 3 - cálculo do super poder para carta 1 e carta 2
    superPoder = (float)qtdPopulacao + areaKM + PIB + (float)numPontosTuristicos + PIBperCapita + (1.0f / densidadePopulacional); 
    superPoder2 = (float)qtdPopulacao2 + areaKM2 + PIB2 + (float)numPontosTuristicos2 + PIBperCapita2 + (1.0f / densidadePopulacional2);

    
    //saída estruturada conforme solicitado na atividade
   printf("\nComparação de Cartas:\n\n");

    int r1 = qtdPopulacao > qtdPopulacao2;
    printf("População: Carta %d venceu (%d)\n", r1 ? 1 : 2, r1);

    int r2 = areaKM > areaKM2;
    printf("Área: Carta %d venceu (%d)\n", r2 ? 1 : 2, r2);

    int r3 = PIB > PIB2;
    printf("PIB: Carta %d venceu (%d)\n", r3 ? 1 : 2, r3);

    int r4 = numPontosTuristicos > numPontosTuristicos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", r4 ? 1 : 2, r4);

    int r5 = densidadePopulacional < densidadePopulacional2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", r5 ? 1 : 2, r5);

    int r6 = PIBperCapita > PIBperCapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", r6 ? 1 : 2, r6);

    int r7 = superPoder > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", r7 ? 1 : 2, r7);

    
    return 0;
}