#include <iostream> // Bibliote padrão;
#include <iomanip> // Biblioteca para usar o setprecision;
using namespace std;

int main()
{
    int i, N; // Contador do for;
    float M; // Media;
    float Snotas = 0; // Soma das notas para fazer a media;
    int NotasAci = 0; // Notas acima da media;
    int NotasAba = 0; // Notas abaixo da media;
    int notas[300]; // Quantidade de notas que podem entrar;

    cin >> N; // Entrada de repetições;
    for (i = 0; i < N; i++)
    {
        cin >> notas[i]; // Entrada das notas dos alunos;
        Snotas += notas[i];
    }

    M = Snotas / N; // Conta da media;

    for (i = 0; i < N; i++) // Repetição para aumentar nas variaveis;
    {
                
    if (notas[i] > M) // Caso a nota seja maior que a media vai somar 1 na variavel;
    {
        NotasAci++;
    }else if(notas[i] < M){
        NotasAba++; // Caso a nota seja maior que a media vai somar 1 na variavel;
    }

    }

    cout << setprecision(2) << fixed; // Determina a quantidade de casas decimais;
    cout << "Media da turma: " << M << endl; // Exibe a media que esta na variavel M;

    cout << "Alunos com nota acima da media: " << NotasAci << endl; // Exibe as notas acima da Media;
    cout << "Alunos com nota abaixo da media: " << NotasAba << endl; // Exibe as notas abaixo da Media;

    return 0;
}    