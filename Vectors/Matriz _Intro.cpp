#include <iostream>
using namespace std;

void soma(int v[], int tam, int &s1, int &s2) // Ao colocar & a info volta para a main
{
    int i;
    s1 = 0;   
    for (i = 0; i < tam; i++)
        s1 += v[i];
        s2 *= v[i];
}

int main()
{
    int v[5]; // Armazena os dados
    int n; // Numero de elementos inseridos
    int i; // Contador
    int p; // Multiplicação
    int s = 0; // Soma dos elementos

    // Entrada dados e inserindo no vetor
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> v[i];

        // Soma dos elemntos
        soma(v, n, s, p);
        
    }
    
    // Mostrando a soma
    cout << "Soma = " << s << endl;
    cout << "Produto = " << p << endl;

    return 0;
}