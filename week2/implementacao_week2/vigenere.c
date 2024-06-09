#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Função para criptografar uma mensagem usando a cifra de Vigenere
void encryptVigenere(char *message, const char *key) {
    int messageLen = strlen(message);
    int keyLen = strlen(key);
    int keyIndex = 0;

    for (int i = 0; i < messageLen; i++) {
        if (isalpha(message[i])) {
            int offset = isupper(key[keyIndex]) ? 'A' : 'a';
            int shift = toupper(key[keyIndex]) - offset;
            message[i] = (char)(((toupper(message[i]) - offset + shift) % 26) + offset);
            keyIndex = (keyIndex + 1) % keyLen;
        }
    }
}

int main(int argc, char const *argv[]) {
    // Verifica se o número de argumentos de linha de comando é diferente de 3
    if (argc != 3) {
        printf("Por favor, insira dois argumentos de linha de comando: nome do arquivo e palavra-chave.\n");
        return 1;
    }

    // Pega a palavra-chave do segundo argumento de linha de comando
    const char *key = argv[2];

    // Frase a ser criptografada
    char message[100];
    printf("Digite a frase a ser criptografada: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0'; // Remove a quebra de linha do final da string

    // Criptografa a mensagem usando a chave
    encryptVigenere(message, key);

    // Imprime a mensagem criptografada
    printf("Mensagem criptografada: %s\n", message);

    return 0;
}
