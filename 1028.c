/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 18/06/2026
Objetivo    : Calcular a quantidade de figurinhas em cada pilha com MDC.
Aprendizado : Como utilizar o “e” no if para descobrir o divisor comum.
-------------------------------------------------------------------------- */

#include <stdio.h>
int main()
{
    int N, F1, F2, MDC;
    scanf("%d", &N);
    if ( ( N >= 1 ) && ( N <= 3000 ) )
    {
        for ( int i = 1; i <= N; i++)
        {
           scanf("%d %d", &F1, &F2);
           if ( ( F1 >= 1 ) && ( F1 <= 1000 ) && ( F2 >= 1 ) && ( F2 <= 1000 ) )
           {
               if ( F1 < F2 )
               {
                   for ( int j = F1; ; j = j - 1)
                   {
                       if ( ( F2 % j == 0 ) && ( F1 % j == 0 ) )
                       {
                           MDC = j;
                           break;
                       }
                   }
               }
               else
               {
                   for ( int j = F2; ; j = j - 1)
                   {
                       if ( ( F2 % j == 0 ) && ( F1 % j == 0 ) )
                       {
                           MDC = j;
                           break;
                       }
                   }
               }
               printf("%d\n", MDC);
           }
        }
    }
    return 0;
}
