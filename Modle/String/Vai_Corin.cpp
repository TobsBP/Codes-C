#include <iostream>
#include <string>
using namespace std;

int main()
{
    string jogador[10];
    int idade[10];
    int n, i;

    // Quantidade de repetição
    cin >> n;

    // Entrada para idade e nome dos jogadores
    for (i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, jogador[i]);
        cin >> idade[i];
    }

    // Exibe os jogadores com mais de 18
    for (i = 0; i < n; i++)
    {
        if (idade[i] >= 18)
        {
            cout << jogador[i] << " " << idade[i] << endl;
        }
    }

    return 0;
}
