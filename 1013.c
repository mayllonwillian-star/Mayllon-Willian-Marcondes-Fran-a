/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 07/06/2026
Objetivo    : Escrever o maior de três números inteiros.
Aprendizado : O uso dos comandos scanf e if
-------------------------------------------------------------------------- */

#include<stdio.h>
int main()
{
    int A, B, C, maior;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if ( ( A > B ) && ( A > C ) )
    {
        maior = A;
    }
    else
    {
        if ( B > C )
        {
            maior = B;
        }
        else
        {
            maior = C;
        }
    }
    printf("%d\n", maior);
    return 0;
}
