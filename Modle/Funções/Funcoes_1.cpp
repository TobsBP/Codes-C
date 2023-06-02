#include <iostream>
#include <cmath>
using namespace std;

int calc_a(int x) // Função para conta do a
{
    int a;
    a = 2 * pow(x, 2) + (3 * x) - 1;
    
    return a;
}

int calc_b(int x) // Função para conta do b
{
    int b;
    b = pow(x,3);
    
    return b;
}

int calc_c(int y) // Função para conta do c
{
    int c;

    c = pow(y,3);

    return c;
}  

int main()
{
    int a, b, c, x, y; // Armazena os numeros

    // Entrada
    cin >> x >> y;

    // Chama a função a
    a = calc_a(x); 
    cout << "a = " << a << endl;

    // Chama a função b
    b = calc_b(x);
    cout << "b = " << b << endl;

    // Chama a função c
    c = calc_c(y);
    cout << "c = " << c << endl;
    
    return 0;
}