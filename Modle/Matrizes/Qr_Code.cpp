#include <iostream>
using namespace std;

int main()
{
    int masc[3][3];
    int femi[3][3];
    int test[3][3];
    int l, c;
    int m; // Guarda +1 se for masculino
    int f; // Guarda +1 se for feimino

    // Declarei os valores do QR code masculino nas respectivas linhas e colunas 
    masc[0][0] = 1; masc[0][1] = 1; masc[0][2] = 1;
    masc[1][0] = 0; masc[1][1] = 1; masc[1][2] = 0;
    masc[2][0] = 0; masc[2][1] = 0; masc[2][2] = 1;

    // Declarei os valores do QR code feminino nas respectivas linhas e colunas
    femi[0][0] = 1; femi[0][1] = 0; femi[0][2] = 0;
    femi[1][0] = 1; femi[1][1] = 1; femi[1][2] = 0;
    femi[2][0] = 1; femi[2][1] = 0; femi[2][2] = 0;
    
    // Entrada na matriz teste 
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            cin >> test[l][c];
        }
        
    }
    
    // Verifica qual tem mais numeros iguais
    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 3; c++)
        {
            if (test[l][c] == femi[l][c])
            {
                f++;
            } else if(test[l][c] == masc[l][c])
            {
                m++;
            }
        }  
    }
        
    // Condição para exibir
    if (m > f)
    {
        cout << "MASCULINO" << endl;
    } else if(m < f)
        cout << "FEMININO" << endl;
    

    return 0;
}