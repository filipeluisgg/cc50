#include <stdio.h>

int
main(void)
{
    for (int cervejas = 10; cervejas > 0; cervejas--)
    {
        if (cervejas > 1)
        {
            printf("\n%d garrafas de cerveja no muro.\n", cervejas);
            printf("%d garrafas de cerveja. \nBebo uma, jogo no lixo.\n", cervejas);
            printf("%d garrafas no muro.\n", cervejas - 1);
        } else
        {
            printf("\n%d garrafa de cerveja no muro.\n", cervejas);
            printf("%d garrafa de cerveja. \nBebo a ultima, jogo no lixo.\n", cervejas);
            printf("Nenhuma garrafa no muro.\n\n");
        }       
    }
    return 0;
}
