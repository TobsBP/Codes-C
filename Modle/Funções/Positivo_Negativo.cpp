#include <iostream>
using namespace std;

int sinal(int n)
{
    // Condição para saber se é negativo ou positivo
    if (n > 0)
    {
       n = 1;    
    } else if(n < 0)
    {
        n = -1;
    } else if(n == 0)
    {
        n = 0;
    }

    return n;
}

int main()
{
    int x; // Numero a ser testado
    int n; // Armazena -1 e 1 ou 0 da condiçõaa da o função

    cin >> x;

    // Pucha a função 
    n = sinal(x);

    // Condição para exibir o tipo
    if (n == 1)
    {
        cout << "Positivo" << endl; 
    } else if (n == -1)
    {
        cout << "Negativo" << endl;
    } else if (n == 0)
        cout << "Zero" << endl;
    
    return 0;
}