#include <iostream>

using namespace std;

int main()
{
	int i; // Contador do for;
    int contador; // Quantidade de repetição;
    int vews[1000]; // Vetor para armazenar os as quanridades de visualizações;

    int maior = 0; // Para armazenar se o video tem mais de 10m;
    int menor = 0; // Para armazenar se o video tem menos de 10m;

    cin >> contador; // Entrada para quantidade de repetição;

    for ( i = 0; i < contador; i++) // Entrada para o vetor baseado no contador; 
    {
        cin >> vews[i];
    }

    for ( i = 0; i < contador; i++) // Condição para ver se o video tem mais ou menos vews;
    {
        if (vews[i] >= 10000000)
        {
            maior++; // Se tiver mais ou igual a 10m aumenta um valor na variavel;
        }
        else
        {
            menor++; // Se tiver menos de 10m aumenta um valor na variavel;
        }
    }
    
    cout << maior << " video(s) com mais de 10M views" << endl; // Exibe os videos com mais de 10m vews;
    cout << menor << " video(s) com menos de 10M views" << endl; // Exibe os videos com menos de 10m vews;

    return 0; 
}