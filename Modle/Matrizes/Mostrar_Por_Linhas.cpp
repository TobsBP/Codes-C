#include <iostream>
using namespace std;

int main()
{
    int m[10][10];
    int nColunas;
    int nLinhas;
    int c, l;

    cin >> nLinhas;
    cin >> nColunas;

    // Armazena na matriz correspondente a nLinhas e nColunas
    for (l = 0; l < nLinhas; l++)
    {
        for (c = 0; c < nColunas; c++)
        {
            cin >> m[l][c]; 
        }     
    }

    for(l = 0; l < nLinhas; l++)
	{
        // Exibe no formato de uma matriz
		for(c = 0; c < nColunas; c++)
			cout << m[l][c] << " ";
		cout << endl;
	}

    return 0;
}