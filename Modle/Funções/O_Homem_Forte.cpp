#include <iostream>
#include <climits>
using namespace std;

struct dados
{
    char nome[100];
    int n1;
    int n2;
    int n3;
    int n4; 
};

int strongest(dados atletas[], int nAtletas)
{
    int Mforte = 0; // Variável para armazenar a posição do vencedor
    int maiorMedia = -1; // Variável para armazenar a maior média mais baixa
    int i; // Contador do for
    int soma; // Armazena a soma das notas
    float media; // Armazena a media

    for (i = 0; i < nAtletas; i++)
    {
        // Faz a media
        soma = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
        media = soma / 4;

        // Caso a media seja maior o numero correnpondente do atleta é armazena no vencedor
        if (media > maiorMedia)
        {
            maiorMedia = media;
            Mforte = i;
        }
    }

    return Mforte; // Retorna a posição do vencedor no vetor
}

int main()
{
    dados atletas[10]; // Armazena ate 10 atletas
    int nAtletas; // Quantidade de atletas
    int Mforte; // Armazena o numero do mais forte
    int i; // Contador do for
    
    // Quantidade de atletas
    cin >> nAtletas;

    for (i = 0; i < nAtletas; i++)
    {
        cin.ignore();
        cin.getline(atletas[i].nome, 100); // Armazena o nome do atleta 
        // Armazena as notas
        cin >> atletas[i].n1 >> atletas[i].n2 >> atletas[i].n3 >> atletas[i].n4;
    }

    // Exibe
    Mforte = strongest(atletas, nAtletas);
    cout << atletas[Mforte].nome << endl;

    return 0;
}
