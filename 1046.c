/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 16/06/2026
Objetivo    : Calcular a duração de um jogo em horas.
Aprendizado : Como criar e utilizar funções, além de calcular com limites de intervalo.
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int inicio, int fim)
{
    int tempo = fim - inicio;
    if ( tempo <= 0 )
    {
        tempo = tempo + 24;
    }
    return tempo;
}

int main()
{
    int inicio, fim;
    scanf("%d %d", &inicio, &fim);
    int total = calcularDuracao(inicio, fim);
    if ( inicio >= 0 && inicio <= 24 && fim >= 0 && fim <= 24 )
    {
        printf("O JOGO DUROU %d HORA(S)\n", total);
    }
    return 0;
}
