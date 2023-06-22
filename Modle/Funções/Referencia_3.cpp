#include <iostream>
using namespace std;

void troca(int &X, int &Y)
{
    int t, m; // Variaveis que armazena temporariamente os valores de x e y

    t = Y;
    m = X;
    X = t;
    Y = m;
}

int main()
{
    int x, y; // Armazena os valores

    // Entrada
    cin >> x >> y;

    // Chama a funcao
    troca(x, y);

    // Exibe
    cout << x << " "<< y << endl;
    return 0;
}