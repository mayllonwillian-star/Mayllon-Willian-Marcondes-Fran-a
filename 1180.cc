/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 22/06/2026
Objetivo    : Escrever o menor valor de um vetor e sua posição.
Aprendizado : Como ler o valor e a posição atualizando para o menor e como escrever os valores com cout.
-------------------------------------------------------------------------- */

#include<iostream>
using namespace std;
int main()
{
    int N;
    int X[1000];
    cin >> N;
    for (int i = 0; i <= N - 1; i++)
    {
      cin >> X[i];
    }
    int menor = X[0];
    int pos = 1;
    for (int i = 0; i <= N - 1; i++)
    {
      if ( X[i] < menor )
      {
        menor = X[i];
        pos = i;
      }
    }
    cout << "Menor valor: " << menor << endl << "Posicao: " << pos << endl;
    return 0;
}
