/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 18/06/2026
Objetivo    : Escrever matrizes quadradas de tamanho n.
Aprendizado : Como utilizar matrizes em c++.
-------------------------------------------------------------------------- */

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                cout << setw(3) << setfill(' ') << 1;
                for (int j = 1; j < N; ++j)
                {
                    cout << setw(4) << setfill(' ') << min(min(i, N - 1 - i), min(j, N - 1 - j)) + 1;
                }
                cout << endl;
            }
        }    
    }
    return 0;
}
