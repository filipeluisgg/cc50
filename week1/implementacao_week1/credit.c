#include <stdio.h>
#include <string.h>

int main(void) {
    // Criando variável
    char cardNumberString[20];  // Tamanho do array é 16 + alguns extras para garantir espaço
    
    // Obtendo o número do cartão
    printf("Digite, sem espacos, o numero do seu cartao: ");
    scanf("%s", cardNumberString);
    
    // Verificando se o número tem pelo menos 1 dígito
    if (strlen(cardNumberString) < 1) {
        printf("O numero do cartao eh invalido! Seu cartao nao tem caracteres.\n");
        return 1; // Sair do programa com código de erro
    }

    // Começando a codificar a lógica
    int numberOfDigits = strlen(cardNumberString);
    int sum = 0;

    // Utilizando um único loop para percorrer os dígitos
    for (int i = 0; i < numberOfDigits; i++) {
        int digit = cardNumberString[i] - '0';

        // Multiplicar cada segundo dígito por 2, começando com o penúltimo dígito
        // Essa linha abaixo é para tratar cartões com numeros pares e ímpares
        if ((numberOfDigits - i) % 2 == numberOfDigits % 2) {
            digit *= 2;

            // Se o produto tem dois dígitos, somar os dígitos individuais
            if (digit > 9) {
                digit = (digit % 10) + (digit / 10);
            }
        }

        // Adicionar à soma
        sum += digit;
    }

    // Verificar a validade do cartão
    if (sum % 10 == 0) {
        printf("Numero de cartao valido!\n");
    } else {
        printf("Numero de cartao invalido!\n");
    }

    return 0;
}
