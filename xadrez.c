#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
void inicia_tabuleiro(int tabul[N][N])
{
int i=0, j=0;
for(i=0; i<N; i++) //Construir Linhas apartir de repeticao
for(j=0; j<N; j++) //Construir colunas apartir de repeticao
    tabul[i][j] =0;     // Preencher a tabela com zeros            
}
void random(int tabul[N][N]) //Funcao para escrever numeros aleatorios
{
int i=0, j=0;
for(i=0; i<N; i++)
for(j=0; j<N; j++)
    tabul[i][j] =rand()%100;
}
void numeros(void)
{
for(int i=0; i<N; i++) printf(" %2d",i+1); //Escreve numeros em cima "1 2 3 4 5..."
}
void traco()
{
for(int i=0; i<N; i++) printf("%c%c%c%c",206,205,205,205); //criar o contorno das linhas da tabela
printf("%c\n",206); //fim linha
}
void mostra_tabuleiro(int tab[N][N])
{
int v[99],a;
numeros(); //Escreve numeros em cima "1 2 3 4 5..."
printf("\n ");
traco();
for(int i=0; i<N; i++)
{
printf("%c",i+65); //letra lado esquerdo " A B C ..."
    for(int j=0; j<N; j++)
    {
        printf("%c%2d ", 186,tab[i][j]); //Escreve "||numero aleatorio ||numero aleatorio..."
    }
    printf("%c%c \n ",186,i+65); //Letra lado direito
traco();

    }
numeros(); //Escreve numeros em baixo "1 2 3 4 5..."
printf("\n\n"); //Muda de linha
}
int main(void)
{
srand(time(NULL));
int n,e,i;
int tabul[N][N];
printf("Luta de Cavalos - MIEEIC: \n\n");
inicia_tabuleiro(tabul);
random(tabul);
mostra_tabuleiro(tabul);
return 0;
}