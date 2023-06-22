#include <iostream>
#include <string>
using namespace std;

struct Jedi {
    string nome;
    int posi[20];
};

int main() {
    Jedi pessoa[1000];
    string procurar;
    int achou = -1;
    int n;

    // Entrada do número de cavaleiros
    cin >> n;

    // Entrada dos dados dos cavaleiros
    for (int i = 0; i < n; i++) {
        cin >> pessoa[i].nome;
        cin >> pessoa[i].posi[i];
    }

    cin >> procurar;

    // Procura o cavaleiro na lista
    for (int i = 0; i < n; i++) {
        if (pessoa[i].nome == procurar) {
            achou = pessoa[i].posi[i];
        }
    }

    // Exibe o resultado
    if (achou != -1) {
        cout << "O cavaleiro esta na base " << achou << endl;
    } else {
        cout << "Este cavaleiro nao esta cadastrado" << endl;
    }

    return 0;
}
