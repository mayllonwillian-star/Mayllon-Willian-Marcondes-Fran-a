/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 18/06/2026
Objetivo    : Imprimir a solução do Pão de queijo sweeper.
Aprendizado : Como escrever outra matriz que depende dos vizinhos.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;
int matriz[102][102];
int adjacentes(int i, int j)
{
    return matriz[i - 1][j] + matriz[i + 1][j] + matriz[i][j - 1] + matriz[i][j + 1];
}
int main()
{
    int N, M;
    while (cin >> N >> M)
    {
        for (int i = 0; i <= N + 1; i++)
        {
            for (int j = 0; j <= M + 1; j++)
            {
                matriz[i][j] = 0;
            }
        }
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                cin >> matriz[i][j];
            }
        }
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= M; j++)
            {
                if (matriz[i][j] == 0)
                {
                    cout << adjacentes(i, j);
                }
                else
                {
                    cout << 9;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
