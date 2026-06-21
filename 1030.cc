/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 21/06/2026
Objetivo    : Calcular diversas situações do problema de Josephus.
Aprendizado : Como transformar o problema em algo matemático e escrever todos os casos no final.
-------------------------------------------------------------------------- */

#include <iostream>
using namespace std;
int josephus(int n, int k) 
{
    int vivo = 1;
    for (int i = 2; i <= n; i++) 
    {
        vivo = (vivo + k - 1) % i + 1;
    }
    return vivo;
}
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int NC;
    cin >> NC;
    if ( ( NC >= 1 ) && ( NC <= 30 ) )
    {
        for (int caso = 1; caso <= NC; caso++) 
        {
            int n, k;
            cin >> n >> k;
            if ( ( n >= 1 ) && ( n <= 10000 ) && ( k >= 1 ) && ( k <= 1000 ) )
            {
                cout << "Case " << caso << ": " << josephus(n, k) << "\n";   
            }
        }
    }
    return 0;
}
