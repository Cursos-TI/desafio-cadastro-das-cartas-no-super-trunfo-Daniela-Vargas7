#include <stdio.h>
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //ESTADO A: MATO GROSSO DO SUL
    //primeiro passo: definir as variáveis e os tipos de dados

    char cidade[50];
    char codigo[3];
    int populacao;
    float area;
    double pib;
    int pontos;

    //segundo passo: definir a entrada e saída de dados

    printf("Mato Grosso do Sul \n");
    printf("Digite o código da carta:\n");
    scanf("%s, &codigo");

    printf("Digite o nome da cidade:\n");
    scanf("%s, &cidade");

    printf("Digite o total de habitantes da cidade:\n");
    scanf("%d, &populacao");

    printf("Digite a área da cidade em metros quadrados:\n");
    scanf("%f, &area");

    printf("Digite o valor do PIB da cidade:\n");
    scanf("%f, &pib");

    printf("Quantos pontos turísticos existem na cidade?\n");
    scanf("%d, &pontos");

    //terceiro passo: imprimir as respostas do usuário

    printf("Código da Carta: %s", codigo);
    printf("Cidade: %s", cidade);
    printf("Total de Habitantes: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", pib);
    printf("Quantidade de Pontos Turísticos: %d \n", pontos);


    return 0;
}
