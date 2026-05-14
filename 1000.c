/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 14/05/2026
Objetivo    : Calcular a distância entre dois pontos
Aprendizado : Utilizar a biblioteca de matemática com a raiz quadrada
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, y1, x2, y2;
    float distancia;
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    distancia = sqrt( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) );
    printf("%.4f\n", distancia);
    return 0;
}
