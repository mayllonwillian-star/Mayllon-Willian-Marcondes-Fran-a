/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 07/06/2026
Objetivo    : Somar todos os números ímpares consecutivos estritamente entre dois valores.
Aprendizado : Como utilizar o comando for e a operação porcentagem.
-------------------------------------------------------------------------- */

#include<stdio.h>
int main()
{
    int A, B, i;
    int soma = 0;
    scanf("%d %d", &A, &B);
    if ( A < B )
    {
        i = ( A + 1 );
        for ( ; ; i++)
        {
           if ( i == B )
           {
              break;
           }
           else
           {  
              if ( ( i % 2 ) != 0 )
              {
                 soma = soma + i;
              } 
           }
        }
    }
    else
    {
        if ( A > B )
        {
          i = ( B + 1 );
          for ( ; ; i++)
          {
              if ( i == A )
              {
                 break;
              }
              else
              {  
                 if ( ( i % 2 ) != 0 )
                 {
                    soma = soma + i;
                 } 
              }
          } 
        }
    }
    printf("%d\n", soma);
    return 0;
}
