/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 18/06/2026
Objetivo    : Calcular o valor na sequência de Fibonacci com calls.
Aprendizado : Como fazer somas usando números anteriores e atualizá-los.
-------------------------------------------------------------------------- */

#include <stdio.h>
int main()
{
    int casos, fib, valor, v1, v2, calls, c1, c2;
    scanf("%d", &casos);
    for ( int i = 1; i <= casos; i++)
    {
        scanf("%d", &fib);
        if ( ( fib == 0 ) || ( fib == 1 ) )
        {
            valor = fib;
            calls = 0;
        }
        else
        {
            v1 = 1;
            v2 = 0;
            c1 = 0;
            c2 = 0;
            for ( int j = 2; j <= fib; j++)
            {
                valor = v1 + v2;
                v2 = v1;
                v1 = valor;
                calls = c1 + c2 + 2;
                c2 = c1;
                c1 = calls;
            }
        }
        printf("fib(%d) = %d calls = %d\n", fib, calls, valor);
    }
    return 0;
}
