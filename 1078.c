/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 14/06/2026
Objetivo    : Ler um valor e mostrar sua tabuada até o 10.
Aprendizado : Como utilizar o for para repetir e escrever sentenças.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int N, p;
    scanf("%d", &N);
    if ( ( N > 2 ) && ( N < 1000 ) )
    {
       for ( int i = 1; i <= 10; i++)
       {
           p = N * i;
           printf("%d x %d = %d\n", i, N, p);
       } 
    }

    return 0;
}
