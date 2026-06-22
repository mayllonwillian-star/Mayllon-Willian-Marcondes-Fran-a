/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 22/06/2026
Objetivo    : Imprimir a cor e o tamanho de camisetas em ordem alfabética de alunos.
Aprendizado : Como utilizar structs e colocar em ordem alfabética.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
    char cor[15];
    char tamanho;
    char nome[60];
} Camiseta;
int comparar(const void *a, const void *b) 
{
    Camiseta *camA = (Camiseta *)a;
    Camiseta *camB = (Camiseta *)b;
    int cor = strcmp(camA->cor, camB->cor);
    if (cor != 0) return cor;
    if (camA->tamanho != camB->tamanho) 
    {
        if (camA->tamanho == 'G') return -1;
        if (camB->tamanho == 'G') return 1;
        if (camA->tamanho == 'M') return -1;
        if (camB->tamanho == 'M') return 1;
    }
    return strcmp(camA->nome, camB->nome);
}
int main() 
{
    int n, primeiro = 1;
    while (scanf("%d", &n) && n != 0) 
    {
        if (!primeiro) 
        {
            printf("\n");
        }
        primeiro = 0;
        Camiseta camisetas[60];
        for (int i = 0; i < n; i++)
        {
            getchar();
            scanf("%[^\n]", camisetas[i].nome);
            scanf("%s %c", camisetas[i].cor, &camisetas[i].tamanho);
        }
        qsort(camisetas, n, sizeof(Camiseta), comparar);
        for (int i = 0; i < n; i++)
        {
            printf("%s %c %s\n", camisetas[i].cor, camisetas[i].tamanho, camisetas[i].nome);
        }
    }
    return 0;
}
