/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 14/06/2026
Objetivo    : Ler uma frase e criptografá-la.
Aprendizado : Como manipular uma string com condições do tamanho dela.
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int casos, i;
    scanf("%d", &casos);
    getchar();

    while (casos--) 
    {
        char linha[1005], invertida[1005];
        fgets(linha, 1005, stdin);
        size_t len = strlen(linha);
        if (len > 0 && linha[len - 1] == '\n') 
        {
            linha[len - 1] = '\0';
            len--;
        }
        for (i = 0; i < len; i++) 
        {
            if ((linha[i] >= 'A' && linha[i] <= 'Z') || (linha[i] >= 'a' && linha[i] <= 'z')) 
            {
                linha[i] += 3;
            }
        }
        int j = 0;
        for (i = len - 1; i >= 0; i--) 
        {
            invertida[j++] = linha[i];
        }
        invertida[j] = '\0';
        int metade = len / 2;
        for (i = metade; i < len; i++) 
        {
            invertida[i] -= 1;
        }
        printf("%s\n", invertida);
    }
    return 0;
}
