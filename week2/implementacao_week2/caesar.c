#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Argumentos insuficientes.\n");
        return 1;
    }
    
    // Criando variáveis
    char frase[51];
    strcpy(frase, argv[1]); // Copiando o argumento para a variável frase
    int key = atoi(argv[2]);

    // Configurando o resto da divisão, para que var result nunca seja maior que 27
    int result = key % 27;
    if (key >= 27) {
        result++;
    }
    
    // Codificando a lógica
    printf("\n");
    for (int i = 0, n = strlen(frase); i < n; i++) {
        int num = result;
        // Corrigindo o programa com uma lógica para criptografar apenas letras minúsculas e maiúsculas
        if (frase[i] >= 'A' && frase[i] <= 'Z') {
            while (result > 0) {
                frase[i]++;
                result--;
                
                if (frase[i] > 'Z') {
                    frase[i] -= 26;
                }
            }
        } 
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            while (result > 0) {
                frase[i]++;
                result--;
                
                if (frase[i] > 'z') {
                    frase[i] -= 26;
                }
            }
        }

        result = num;
        printf("%c", frase[i]);
    }
    printf("\n");

    return 0;
}
