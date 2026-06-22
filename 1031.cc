/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 22/06/2026
Objetivo    : Calcular o menor número de saltos para certa região ser apagada por último.
Aprendizado : Como utilizar matrizes para resolver problemas de lógica.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;
int T[101][1001];
int ultima(int n, int k)
{
    if (T[n][k] == -1)
    {
        T[n][k] = (ultima(n - 1, k) + k) % n;
    }
    return T[n][k];
}
int main()
{
    int N, m;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            T[i][j] = 0;
        }
    }
    for (int i = 2; i < 101; i++)
    {
        for (int j = 0; j < 1001; j++)
        {
            T[i][j] = -1;
        }
    }
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        else
        {
            if ( ( N >= 13 ) && ( N <= 100 ) )
            {
                m = 1;
                while ((ultima(N - 1, m) + 1) % N != 12)
                {
                    m = m + 1;
                }
                cout << m << endl;
            }
        }
    }
    return 0;
}
