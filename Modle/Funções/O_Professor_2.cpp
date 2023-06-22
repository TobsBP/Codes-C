#include <iostream>
#include <iomanip>
using namespace std;

float nAbaixo(int notas[], int nAlunos, float media) {
    int quantid = 0;

    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] < media) {
            quantid++;
        }
    }

    return quantid; // Retorna a quantidade de alunos abaixo 
}

float nAcima(int notas[], int nAlunos, float media) {
    int quantid = 0;

    for (int i = 0; i < nAlunos; i++) {
        if (notas[i] > media) {
            quantid++;
        }
    }

    return quantid; // Retorna a quantidade de alunos acima
}

float calcularMedia(int notas[], int nAlunos) {
    int soma = 0;

    for (int i = 0; i < nAlunos; i++) {
        soma += notas[i];
    }

    return (soma) / (1.0 * nAlunos); // Retorna a média como float
}

int main() {
    int notas[100]; // armazena as notas
    int nAlunos; // Quantidade de alunos
    float abaixoMedia; // Quem estiver abaixo da media é armazenado 
    float acimaMedia; // Quem estiver acima da media é armazenado 
    float media; // 

    // Quantidade de notas
    cin >> nAlunos;

    // Entrada das notas no vetor
    for (int i = 0; i < nAlunos; i++) {
        cin >> notas[i];
    }

    // Defini as respectivas funcoes
    media = calcularMedia(notas, nAlunos);
    abaixoMedia = nAbaixo(notas, nAlunos, media);
    acimaMedia = nAcima(notas, nAlunos, media);

    // Exibe
    cout << setprecision(2) << fixed << "Média da turma: " << media << endl;
    cout << "Alunos com nota abaixo da media: " << abaixoMedia << endl;
    cout << "Alunos com nota acima da media: " << acimaMedia << endl;

    return 0;
}
