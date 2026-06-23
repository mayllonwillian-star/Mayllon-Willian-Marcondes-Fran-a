/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Mayllon Willian Marcondes França
Linguagem   : C++
Problema    : Jogo do Sudoku.
Data        : 23/06/2026
Objetivo    : Criar um jogo que o usuário precisa resolver um Sudoku.
Aprendizado : Como usar o comando bool para checar as linhas, colunas e cédulas, além de analisar vários casos de interação do usuário.
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
            if ( sudoku[i][j] != 0 )
            {
                int v = sudoku[i][j];
                if ( freq[v] == 1 )
                {
                    return false;
                }
                freq[v] = 1;
            }
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
            if ( sudoku[j][i] != 0 )
            {
                int v = sudoku[j][i];
                if ( freq[v] == 1 )
                {
                    return false;
                }
                freq[v] = 1;
            }
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
                    if ( sudoku[li+i][ci+j] != 0 )
                    {
                        int v = sudoku[li+i][ci+j];
                        if ( freq[v] == 1 )
                        {
                            return false;
                        }
                        freq[v] = 1;
                    }
                }
            }
        }
    }
    return true;
}
int main ()
{
    int l, c;
    int sudoku[9][9] = 
    {
        {1,3,0, 0,7,9, 4,0,0},
        {4,0,8, 0,0,0, 0,7,0},
        {7,0,0, 3,8,0, 2,0,0},
        
        {0,0,3, 0,0,8, 0,9,0},
        {0,2,1, 0,9,3, 8,4,6},
        {9,0,0, 4,0,0, 0,0,0},
        
        {2,0,0, 0,0,0, 6,8,7},
        {3,6,5, 0,0,0, 0,0,0},
        {8,0,9, 0,0,2, 1,0,0}
    };
    bool original[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            original[i][j] = (sudoku[i][j] != 0);
        }
    }
    int t = 0;
    while (t < 46)
    {
        cout << "-------SUDOKU-------" << endl << "Objetivo: substituir os zeros para números de 1 a 9 " << endl << "sem que seja repetido na linha, coluna ou bloco." << endl;
        for (int i = 0; i < 9; i++)
        {
            if (i % 3 == 0 && i != 0)
            {
                cout << "------+-------+------\n";
            }
            for (int j = 0; j < 9; j++)
            {
                if (j % 3 == 0 && j != 0)
                {
                    cout << "| ";
                }
                cout << sudoku[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl << "Linha(1 a 9): ";
        cin >> l;
        cout << "Coluna(1 a 9): ";
        cin >> c;
        if (l < 1 || l > 9 || c < 1 || c > 9)
        {
            cout << "A linha e a coluna devem ser de 1 a 9!" << endl << endl;
            continue;
        }
        if (original[l-1][c-1])
        {
            cout << "Você não pode alterar um número original do tabuleiro!" << endl << endl;
            continue;
        }
        int antes = sudoku[l-1][c-1]; 
        cout << "Valor(1 a 9): ";
        cin >> sudoku[l-1][c-1];
        if (linha(sudoku) && coluna(sudoku) && cedula(sudoku) && sudoku[l-1][c-1] >= 0 && sudoku[l-1][c-1] < 10)
        {
            cout << "Está correto!" << endl << endl;
            if (antes == 0 && sudoku[l-1][c-1] != 0)
            {
                t++;
            }
            else
            {
                if (antes != 0 && sudoku[l-1][c-1] == 0)
                {
                    t--;
                }
            }
        }
        else
        {
            cout << "Tente de novo!" << endl << endl;
            sudoku[l-1][c-1] = antes;
        }
    }
    cout << "-------SUDOKU FINALIZADO-------" << endl << endl;
    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0 && i != 0)
        {
            cout << "------+-------+------\n";
        }
        for (int j = 0; j < 9; j++)
        {
            if (j % 3 == 0 && j != 0)
            {
                cout << "| ";
            }
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Parabéns! Você resolveu o sudoku!" << endl;
    return 0;   
}
