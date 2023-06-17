#include <iostream>
using namespace std;

int main()
{
    char cod[100][100];
    int nColunas;
    int nLinhas;
    int l, c;

    cin >> nLinhas;
    cin >> nColunas;

    for (l = 0; l < nLinhas; l++)
    {
        for (c = 0; c < nColunas; c++)
        {
            cin >> cod[l][c];
        }
    }
    
    for (c = 0; c < nColunas; c++)
    {
        for (l = 0; l < nLinhas; l++)
        {
            cout << cod[l][c];
        }
    }

    return 0;
}