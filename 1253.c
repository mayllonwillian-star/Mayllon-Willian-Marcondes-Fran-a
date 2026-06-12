/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 12/06/2026
Objetivo    : Decodificar cifras de César.
Aprendizado : Como checar tamanho de strings e o uso da tabela ASCII.
-------------------------------------------------------------------------- */

#include <string.h>
#include <stdio.h>

int main()
{
    int casos;
    int j = 0;
    int deslocamento;
    int i = 0;
    char palavra[51];
    scanf("%d", &casos);
    for ( j = 0; j < casos; j++)
    {
        scanf("%s", &palavra);
        scanf("%d", &deslocamento);
        for ( i = 0; i != strlen(palavra); i++)
        {
            if ( palavra[i] >= 'A' && palavra[i] <= 'Z' )
            {
                palavra[i] = palavra[i] - deslocamento;
                if ( palavra[i] < 'A' )
                {
                    palavra[i] = palavra[i] + 26;
                }
            }
        }
        printf("%s\n", palavra);
    }
    return 0;
}
