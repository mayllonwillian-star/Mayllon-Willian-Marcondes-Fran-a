/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 16/06/2026
Objetivo    : Contar o número de leds para montar números com algarismos digitais.
Aprendizado : Como usar o switch e case, e analisar cada algarismo.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main()
{
    int N, leds;
    char numero[105];
    scanf("%d", &N);
    if ( N >= 1 && N <= 1000 )
    {
        for ( int i = 1; i <= N; i++)
        {
            scanf("%s", numero);
            leds = 0;
            for ( int j = 0; j < strlen(numero); j++)
            {
              switch(numero[j])
              {
                  case '0': leds = leds + 6;
                  break;
                  case '1': leds = leds + 2;
                  break;
                  case '2': leds = leds + 5;
                  break;
                  case '3': leds = leds + 5;
                  break;
                  case '4': leds = leds + 4;
                  break;
                  case '5': leds = leds + 5;
                  break;
                  case '6': leds = leds + 6;
                  break;
                  case '7': leds = leds + 3;
                  break;
                  case '8': leds = leds + 7;
                  break;
                  case '9': leds = leds + 6;
                  break;
              }
            }
            printf("%d leds\n", leds);
        }
    }
    
    return 0;
}
