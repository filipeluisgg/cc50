#include <stdio.h>
#include <stdlib.h> // Para a função atoi

void swap(int *x, int *y) // Criando a função para troca de valores
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int length, int numbers[]) { //função bubbleSort criada
    for (int pass = 0; pass < length - 1; pass++) 
    {
        for (int i = 0; i < length - 1; i++) 
        {
            if (numbers[i] > numbers[i + 1]) {
                swap(&numbers[i], &numbers[i + 1]);
            }
        }
    }
}

int main(int argc, char *argv[])
{   // Verificando se foi passado pelo menos dois argumentos
    int *values = malloc((argc - 1) * sizeof(int));
    if (values == NULL || argc <= 2) {
        printf("Erro ao alocar memoria, minimo de dois argumentos em numero.\n");
        return 1;
    }

    // Convertendo argumentos de linha de comando para inteiros
    for (int i = 1; i < argc; i++) {
        values[i - 1] = atoi(argv[i]);
    }

    bubbleSort(argc - 1, values);

    // Imprimindo os valores ordenados
    for (int i = 0; i < argc - 1; i++) {
        printf("%d ", values[i]);
    } printf("\n");

    free(values); // Liberar memória alocada

    return 0;
}