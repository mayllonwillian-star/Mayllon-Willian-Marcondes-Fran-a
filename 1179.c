/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 16/06/2026
Objetivo    : Criar dois vetores, um para os pares e outro para os ímpares com 5 espaços e escrever.
Aprendizado : Como ler e escrever vetores, além da escrita visual dos números de 0 a 4.
-------------------------------------------------------------------------- */

#include <stdio.h>

int main()
{
    int v[15], par[15], impar[15];
    int pp = 0;
    int pi = 0;
    int np = 0;
    for ( int i = 0; i <= 14; i++)
    {
        scanf("%d", &v[i]);
        if ( v[i] % 2 == 0 )
        {
            par[pp] = v[i];
            pp = pp + 1;
            np = np + 1;
        }
        else
        {
            impar[pi] = v[i];
            pi = pi + 1;
        }
    }
    for ( pp = 0; pp <= np - 1; pp++)
    {
        if ( pp <= 4 )
        {
            printf("par[%d] = %d\n", pp, par[pp]);
        }
    }
    for ( pi = 0; pi <= 14 - np; pi++)
    {
        if ( pi <= 4 )
        {
            printf("impar[%d] = %d\n", pi, impar[pi]);
        }
        else
        {
            if ( pi >= 5 && pi <= 9 )
            {
                printf("impar[%d] = %d\n", pi - 5, impar[pi]);
            }
            else
            {
                printf("impar[%d] = %d\n", pi - 10, impar[pi]);
            }
        }
    }
    for ( pp = 0; pp <= np - 1; pp++)
    {
        if ( pp >= 5 && pp <= 9 )
        {
            printf("par[%d] = %d\n", pp - 5, par[pp]);
        }
        else
        {
            if ( pp >= 9 && pp <= 14 )
            {
                printf("par[%d] = %d\n", pp - 10, par[pp]);
            }
        }
    }
    return 0;
}
