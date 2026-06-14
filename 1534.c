/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 14/06/2026
Objetivo    : Ler um valor e criar uma matriz com 1 na diagonal principal, 2 na secundária e o resto 3.
Aprendizado : Como escrever para posições específicas.
-------------------------------------------------------------------------- */

#include <stdio.h>
int main() 
{
    int N;
    scanf("%d", &N); 
    if ( ( N >= 3 ) && ( N < 70 ) )
    {
        for (int i = 0; i < N; i++) 
        {
           for (int j = 0; j < N; j++) 
           {
               if (i == j && j == N - 1 - i) 
               {
                   printf("1");
               }
               else if (i == j) 
               {
                   printf("1");
               } 
               else if (j == N - 1 - i) 
               {
                   printf("2");
               }
               else 
               {
                   printf("3");
               }
            }
            printf("\n");
            }
        }
        
    
    return 0;
}
