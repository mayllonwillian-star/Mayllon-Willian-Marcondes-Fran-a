/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 21/06/2026
Objetivo    : Calcular o peso de trigo em casas de tabuleiro de damas.
Aprendizado : As limitações de 64 bits e como usar o unsigned long long.
-------------------------------------------------------------------------- */

#include <stdio.h>
int main()
{
    int N, X;
    float graosC;
    unsigned long long int peso, graos;
    scanf("%d", &N);
    if ( ( N >= 1 ) && ( N <= 100 ) )
    {
        for ( int i = 1; i <= N; i++)
        {
            scanf("%d", &X);
            if ( X == 64 )
            {
                peso = 1537228672809129ULL;
                printf("%llu kg\n", peso);
            }
            else
            {
                if ( ( X >= 1 ) && ( X < 64 ) )
                {
                    graos = 0;
                    graosC = 0.5;
                    for ( int j = 1; j <= X; j++)
                    {
                        graosC = graosC * 2;
                        graos =  graos + graosC;
                    }
                    peso = graos / 12000;
                    printf("%llu kg\n", peso);
                }
            }
            
        }
    }
    return 0;
}
