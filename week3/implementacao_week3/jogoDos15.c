#include <stdio.h>
#include <stdlib.h>

#define tableSize 16

void swap(char *x, char *y) 
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void print_board(char *table[]) 
{
    for (int i = 0; i < tableSize; i++) {
        printf("%s  ", table[i]);
        if (i % 4 == 3) {
            printf("\n");
        }
    }
}

int main(void) {
    // Creating the game table.
    char *table[tableSize] = {"15", "14", "13", "12", "11", "10", "09", "08", "07", "06", "05", "04", "03", "02", "01", "__"};
    int position = tableSize - 1;

    printf("\nBoas vindas ao jogo dos 15.\n");
    printf("Para ganhar, deve-se finalizar o jogo com a sequencia em ordem\n");
    printf("crescente, estando o '01' na primeira casa, o '15' na penultima, e o underline na ultima.\n");
    printf("Use os comandos 'w', 's', 'a' e 'd' para mover o espaco vazio, trocando-o de lugar com o numero escolhido.\n\n");


    while (!(strcmp(table[0], "01") == 0 && strcmp(table[15], "__") == 0))
    {
        char decision = 'x';

        print_board(table);

        printf("\nYour move is: ");
        scanf(" %c", &decision);

        switch (decision) {
            case 'w':
                if (position >= 4) {
                    swap(&table[position], &table[position - 4]);
                    position -= 4;
                }
                break;
            case 's':
                if (position <= 11) {
                    swap(&table[position], &table[position + 4]);
                    position += 4;
                }
                break;
            case 'a':
                if (position % 4 != 0) {
                    swap(&table[position], &table[position - 1]);
                    position--;
                }
                break;
            case 'd':
                if ((position + 1) % 4 != 0) {
                    swap(&table[position], &table[position + 1]);
                    position++;
                }
                break;
            default:
                printf("Invalid move! Use 'w', 's', 'a' or 'd'.\n");
        }
    }
    printf("You won the game!!!!\n");

    return 0;
}
