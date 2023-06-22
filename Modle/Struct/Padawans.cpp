#include <iostream>
#include <cstring>
using namespace std;

struct dados
{
    char nome[100];
    int basi;
};

int main()
{
    dados pessoa[10]; // Armazena as pessoas
    int i; // Contador do for
    int n; // Quantidade de pessoas
    char test[100]; // Compara para descobrir qual exibir
    int result;
    int c;

    // Quantidade de repeticao
    cin >> n;

    // Entrada da base e nome 
    for (i = 0; i < n; i++)
    {
        cin >> pessoa[i].nome;
        cin >> pessoa[i].basi;
    }
    
    // Ignora o enter anterior
    cin.ignore();
    
    for (i = 0; i < n; i++)
    {
        // Entrada do nome que deseja descobrir a base
        
        cin.getline(test, 100);
        result = (strcmp(test, pessoa[i].nome)); // Compara se tem algum nome
        c = pessoa[i].basi;
        
        if (result == 0)
        {
            cout << "Este cavaleiro esta na base " << c << endl;
            break;
        } else if(result != 0)
        {
            cout << "Este cavaleiro nao esta cadastrado" << endl;
            break;
        }
    }
    
    

    return 0;
}