#include <stdio.h>

int main() {
    int i;
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;
    int cavalo = 2;
    
    

    printf("\nMovimento da torre\n");
    for ( i = 0; i < Torre; i++)
    {
        printf("Direita\n");
    }

    printf("\nMovimento bispo\n");
    i = 0;
    while (i < Bispo)
    {
       printf("cima\n");
       printf("direita\n");
       i++;
    }
    

    printf("\nMovimento rainha\n");
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < Rainha);

    printf("\nmovimento cavalo\n");

    for ( i = 1; i < cavalo; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            printf("Baixo\n");
        }
        printf("esquerda\n");
    }
    



    
    
    return 0;
}
