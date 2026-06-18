/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 18/06/2026
Objetivo    : Calcular o maior número na sequência de granizo de H.
Aprendizado : Como usar o while e perceber se o número é maior antes ou depois da operação.
-------------------------------------------------------------------------- */

#include <stdio.h>
int main()
{
    int H, maior;
    scanf("%d", &H);
    if ( H >= 1 && H <= 500 )
    {
        maior = H;
        while ( H != 1 )
        {
            if ( H % 2 == 0)
            {
                if ( H > maior )
                {
                    maior = H;
                }
                H = H / 2;
            }
            else
            {
                H = ( 3 * H ) + 1;
                if ( H > maior )
                {
                    maior = H;
                }
            }
        }
        printf("%d\n", maior);
    }
    return 0;
}
