/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2758
Data        : 07/06/2026
Objetivo    : Escrever valores decimais de diferentes maneiras.
Aprendizado : Como definir o número de casas decimais e escrever em notação científica.
-------------------------------------------------------------------------- */

#include<stdio.h>
int main()
{
    double A, B, C, D;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);
    
    printf("A = %.6lf, B = %.6lf, C = %.6lf, D = %.6lf\n", A, B, C, D);
    printf("A = %.1lf, B = %.1lf, C = %.1lf, D = %.1lf\n", A, B, C, D);
    printf("A = %.2lf, B = %.2lf, C = %.2lf, D = %.2lf\n", A, B, C, D);
    printf("A = %.3lf, B = %.3lf, C = %.3lf, D = %.3lf\n", A, B, C, D);
    printf("A = %.3E, B = %.3E, C = %.3E, D = %.3E\n", A, B, C, D);
    printf("A = %.0lf, B = %.0lf, C = %.0lf, D = %.0lf\n", A, B, C, D);
    return 0;
}
