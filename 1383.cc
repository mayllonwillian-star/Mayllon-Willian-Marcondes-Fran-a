/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 23/06/2026
Objetivo    : Verificar se é uma solução do sudoku.
Aprendizado : Como usar o comando bool para checar as linhas, colunas e cédulas.
-------------------------------------------------------------------------- */

#include<iostream>
#include<stdbool.h>
using namespace std;
bool linha(int sudoku[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        int freq[10] = {0};
        for (int j = 0; j < 9; j++)
        {
            int v = sudoku[i][j];
            if ( v < 1 || v > 9 || freq[v] == 1 )
            {
                return false;
            }
            freq[v] = 1;
        }
    }
    return true;
}
bool coluna(int sudoku[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        int freq[10] = {0};
        for (int j = 0; j < 9; j++)
        {
            int v = sudoku[j][i];
            if ( v < 1 || v > 9 || freq[v] == 1 )
            {
                return false;
            }
            freq[v] = 1;
        }
    }
    return true;
}
bool cedula(int sudoku[9][9])
{
    for (int li = 0; li < 9; li = li + 3)
    {
        for (int ci = 0; ci < 9; ci = ci + 3)
        {
            int freq[10] = {0};
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    int v = sudoku[li+i][ci+j];
                    if ( v < 1 || v > 9 || freq[v] == 1 )
                    {
                        return false;
                    }
                    freq[v] = 1;
                }
            }
        }
    }
    return true;
}
int main ()
{
    int n, sudoku[9][9];
    cin >> n;
    if ( n > 0 )
    {
        for (int k = 1; k <= n; k++)
        {
            int i = 0;
            while ( i < 9 )
            {
                int j = 0;
                while ( j < 9 )
                {
                    cin >> sudoku[i][j];
                    j = j + 1;
                }
                i = i + 1;
            }
            if (linha(sudoku) && coluna(sudoku) && cedula(sudoku))
            {
               cout << "Instancia " << k << endl << "SIM" << endl << endl;
            }
            else
            {
               cout << "Instancia " << k << endl << "NAO" << endl << endl;
            }
        }
    }
    return 0;   
}
