#include <iostream>
#include <iomanip> // biblioteca para setprecision
using namespace std;

struct info
{
    int matricula;
    float nota1, nota2;

};

int main()
{
    float mediap; // Armazena a media ponderada
    info aluno; // Armazena as notas do aluno

    cout  << fixed << setprecision(2); // Exibe com 2 casas decimais
    // Entrada para as informações do aluno
    cin >> aluno.matricula;
    cin >> aluno.nota1;
    cin >> aluno.nota2;

    // Conta para media ponderada
    mediap = ((aluno.nota1 * 2) + (aluno.nota2 * 3)) / 5;

    // Exibe as informações 
    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << "Nota da segunda prova: " << aluno.nota2 << endl;
    cout << "Media: " << mediap << endl;


    return 0;
}