/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 14/06/2026
Objetivo    : Ler dois valores e ver se os últimos dígitos de um encaixam no outro.
Aprendizado : Como verificar tamanho de strings e comparar seu conteúdo.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char A[1005], B[1005];
    scanf("%d", &N);
    for ( int i = 1; i <= N; i++)
    {
        scanf("%s %s", A, B);
        int tamA = strlen(A);
        int tamB = strlen(B);
        if ( tamA > tamB )
        {
            if ( strcmp(A + tamA - tamB, B) == 0 )
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
        }
        else
        {
            if ( strcmp(B + tamB - tamA, A) == 0 )
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
        }
    }
    

    return 0;
}
