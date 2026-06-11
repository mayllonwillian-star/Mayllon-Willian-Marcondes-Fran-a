/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 11/06/2026
Objetivo    : Ler 100 valores inteiros e mostrar o maior e a posição.
Aprendizado : utilização de vetores e do comando for.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int v[100], pos;
    int i = 0;
    int maior = 0;
    for ( i = 0; i < 100; i++)
    {
        scanf("%d", &v[i]);
    }
    for ( i = 0; i < 100; i++)
    {
        if ( v[i] > maior )
        {
            maior = v[i];
            pos = ( i + 1 );
        }
    }
    printf("%d\n%d\n", maior, pos);

    return 0;
}
