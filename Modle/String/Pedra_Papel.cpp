#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char jogadorA[10];
    char jogadorB[10];
    int n, i;

    //Quantidade de rpetição
    cin >> n;
    cin.ignore();

    for (i = 0; i < n; i++)
    {
        // Armazena a jogada
        cin.getline(jogadorA, 10);
        cin.getline(jogadorB, 10);

        // Compara as palavras e verifica qual é a condição
        if (strcmp(jogadorA, "pedra") == 0)
        {
            if (strcmp(jogadorB, "pedra") == 0)
            {
                cout << "Empate" << endl;
            } else if (strcmp(jogadorB, "papel") == 0)
            {
                cout << "Jogador B" << endl;
            } else if (strcmp(jogadorB, "tesoura") == 0)
            {
                cout << "Jogador A" << endl;
            }
        } else if (strcmp(jogadorA, "papel") == 0)
        {
            if (strcmp(jogadorB, "papel") == 0)
            {
                cout << "Empate" << endl;
            } else if (strcmp(jogadorB, "tesoura") == 0)
            {
                cout << "Jogador B" << endl;
            } else if (strcmp(jogadorB, "pedra") == 0)
            {
                cout << "Jogador A" << endl;
            }
        } else if (strcmp(jogadorA, "tesoura") == 0)
        {
            if (strcmp(jogadorB, "papel") == 0)
            {
                cout << "Jogador A" << endl;
            } else if (strcmp(jogadorB, "tesoura") == 0)
            {
                cout << "Empate" << endl;
            } else if (strcmp(jogadorB, "pedra") == 0)
            {
                cout << "Jogador B" << endl;
            }
        }
    }
    return 0;
}