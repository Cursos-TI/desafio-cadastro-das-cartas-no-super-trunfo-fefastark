#include <stdio.h>

int main() {
    int populacao, pontos;
    float area, PIB;
    char nome[30], estado[30];

    printf("Digite o nome do estado: \n");
    scanf("%s", &estado);

    printf ("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população da cidade escolhida: \n");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos);

    printf("Digite o PIB dessa cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a área que essa cidade ocupa: \n");
    scanf("%f", &area);

    printf("Nome do estado escolhido: %s \n", estado);
    printf("Nome da cidade escolhida: %s \n", nome);
    printf("A população dessa cidade é de: %d \n", populacao);
    printf("Sua cidade tem, %d, pontos turisticos \n", pontos);
    printf("O PIB da sua cidade é de: %f \n", PIB);
    printf("Sua cidade ocupa um àrea de, %f, km².\n", area);



    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
                    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
