#include <stdio.h>
#include <string.h>

// Definindo uma estrutura para armazenar as propriedades das cidades
struct Cidade {
    char nome[50];
    char codigo[10];
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade cidade1, cidade2;  // Criando duas cartas de cidade

    // Cadastro das Cartas:
    // Solicitando os dados da cidade 1
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1.nome);
    printf("Digite o código da cidade 1: ");
    scanf("%s", cidade1.codigo);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da cidade 1 (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Solicitando os dados da cidade 2
    printf("\nDigite o nome da cidade 2: ");
    scanf("%s", cidade2.nome);
    printf("Digite o código da cidade 2: ");
    scanf("%s", cidade2.codigo);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da cidade 2 (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparação de Cartas:
    // Comparando as cidades com base na população, área e PIB

    printf("\nComparação das Cidades:\n");

    // Comparando a população
    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade 1 tem maior população.\n");
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Cidade 2 tem maior população.\n");
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Comparando a área
    if (cidade1.area > cidade2.area) {
        printf("Cidade 1 tem maior área.\n");
    } else if (cidade1.area < cidade2.area) {
        printf("Cidade 2 tem maior área.\n");
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // Comparando o PIB
    if (cidade1.pib > cidade2.pib) {
        printf("Cidade 1 tem maior PIB.\n");
    } else if (cidade1.pib < cidade2.pib) {
        printf("Cidade 2 tem maior PIB.\n");
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Exibição dos Resultados:
    // Definindo a cidade vencedora com base em um critério, como o PIB
    if (cidade1.pib > cidade2.pib) {
        printf("\nA cidade vencedora é: %s\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("\nA cidade vencedora é: %s\n", cidade2.nome);
    } else {
        printf("\nAs cidades têm o mesmo PIB, nenhum vencedor.\n");
    }

    return 0;
}
