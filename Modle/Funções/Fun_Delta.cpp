#include <iostream>
#include <cmath> // Para poder fazer contas
using namespace std;

// Função para achar o delta
float calc_delta(float a, float b, float c)
{
    float d;
    
    d = pow(b, 2) - 4 * a * c;

    return d;
}

int main()
{
    int a, b, c; // Armazena a,b,c
    float d; // Armazena o delta

    cin >> a >> b >> c; // Entrada

    d = calc_delta(a,b,c); // Chama a função

    cout << "delta = " << d << endl; // Exibe

    return 0;
}