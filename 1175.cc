/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 16/06/2026
Objetivo    : Escrever o vetor ao contrário.
Aprendizado : Como usar o cout em apenas uma linha.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;
int main()
{
    int N[20];
    for ( int i = 0; i <= 19; i++)
    {
        cin >> N[i];
    }
    for ( int j = 19; j >= 0; j = j - 1)
    {
        cout << "N[" << 19 - j << "] = " << N[j] << endl;
    }
    return 0;
}
