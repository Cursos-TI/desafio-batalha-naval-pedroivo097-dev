#include <stdio.h>

int main (){

    char tabuleiro [10][10];
    int linhas = 10, colunas = 10;
    int linha = 1, coluna = 3;
    int linha2 = 3, coluna2 = 5;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            tabuleiro[i][j] = '0';
        }
        
    }
        for (int i = 0; i < 3; i++)
        {
            tabuleiro [linha][coluna + i] = '3';
        }

        for (int i = 0; i < 3; i++)
        {
            tabuleiro [linha2 + i][coluna2] = '3';
        }

        printf ("   ");
        for (int j = 0; j < colunas; j++)
        {
            printf (" %c ", 'A' + j);
        }
            printf (" \n "); 
            
        for (int i = 0; i < linhas; i++)
        {
            printf ("%2d", i + 1);

            for (int j = 0; j < colunas; j++)
            {
                printf (" %c ", tabuleiro [i][j]);
            }
            printf (" \n ");
        }
        
       
}