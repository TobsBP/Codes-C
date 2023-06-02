#include <iostream>
using namespace std;

int main()
{
    int num[100]; // Armazena os numeros digitados;
    int i = 0; // Contador do for;
    int n = 0; // Numeros para serem adicionados no vetor;
    int X; // Numero a ser comparado;

    cin >> n; // Entrada para preencher o vetor;

    while (n != 0) // Vai repetir para colocar um numero no vetor ate que seja 0;
    {
        num[i] = n;
        i++; 
        cin >> n;
    }

    cin >> X;

    if (X == num[i]) // Aqui vai verificar se ja foi digitado ou esta presente no vetor;
    {
        cout << "Elemento " << X << " encontrado na posicao " << i << endl;
    }else if(X != num[i]) // Aqui caso nao foi digitado ouu nao esta presente;
    {
        cout << "Elemento " << X << " nao foi encontrado" << endl;
    }else if(X == 0)
        cout << "Elemento " << X << "nao foi encontrado" << endl; 
    
    return 0;
}
