#include <iostream>
using namespace std;

int main()
{
    int mat1 [10][10];
    int mat2 [10][10];
    int res [10][10]; // Armazena as respostas
    int nLinhas;
    int nColunas;
    int c, l;

    cin >> nLinhas;
    cin >> nColunas;

    for (l = 0; l < nLinhas; l++)
    {
        for (c = 0; c < nColunas; c++)
        {
            cin >> mat1[l][c];
        }
    }
    
    for (l = 0; l < nLinhas; l++)
    {
        for (c = 0; c < nColunas; c++)
        {
            cin >> mat2[l][c];
        }
    }
    
    for (l = 0; l < nLinhas; l++)
    {
        for (c = 0; c < nColunas; c++)
        {
            res[l][c] = mat1[l][c] + mat2 [l][c];
        }
        
    }
    
    for (l = 0; l < nLinhas; l++)
    {
        for (c = 0; c < nColunas; c++)
            cout << res[l][c] << " ";
        cout << endl;
    }
    

    return 0;
}