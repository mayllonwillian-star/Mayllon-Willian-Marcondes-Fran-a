/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 16/06/2026
Objetivo    : Calcular o gasto em litros de uma viagem.
Aprendizado : Como criar e utilizar funções.
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int velocidade)
{
    float gasto = ( tempo * velocidade ) / 12.0;
    return gasto;
}

int main()
{
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);
    float total = calcularLitros(tempo, velocidade);
    printf("%.3f\n", total);

    return 0;
}
