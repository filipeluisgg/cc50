#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade;

    printf("Digite a quantidade de números inteiros que deseja inserir: ");
    scanf("%d", &quantidade);

    // Aloca dinamicamente memória para armazenar a quantidade desejada de inteiros
    int *inteiros = (int *)malloc(quantidade * sizeof(int));

    if (inteiros == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Lê os números inteiros fornecidos pelo usuário e armazena-os no array
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o %d° número inteiro: ", i + 1);
        scanf("%d", &inteiros[i]);
    }

    // Imprime os números inteiros armazenados no array
    printf("Números inteiros armazenados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", inteiros[i]);
    }
    printf("\nINCOMPLETO, POIS ESTÁ SEM AS DEVIDAS BIBLIOTECAS.");

    // Libera a memória alocada dinamicamente
    free(inteiros);

    return 0;
}
