/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 07/06/2026
Objetivo    : Fazer uma sentença dançante.
Aprendizado : Como usar comandos das bibliotecas ctype e string.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char palavra[51];
    while (fgets(palavra, sizeof(palavra), stdin) != NULL) {
        int maiuscula = 1;
        for (int i = 0; i < strlen(palavra); i++)
        {
            if (isalpha(palavra[i])) 
            {
                if (maiuscula) 
                {
                    printf("%c", toupper(palavra[i]));
                    maiuscula = 0;
                }
                else 
                {
                    printf("%c", tolower(palavra[i]));
                    maiuscula = 1;
                }
            } 
            else 
            {
                printf("%c", palavra[i]);
            }
        }
    }
    
    return 0;
}
