#include <iostream>
using namespace std;

int main()
{
    
    int n; // Variavel que recebe o numero que deseja a ter a tabuada
    int i; // Contador do for e para saber por quanto foi multiplicado
    int t; // Resultado da multiplicação

    // Entrada do numero
    cin >> n;

    // For para exibir a tabuada
    for (i = 0; i < 11; i++)
    {
        t = n * i;
        cout << n << " x " << i  << " = "<< t << endl;
    }

    return 0;
}