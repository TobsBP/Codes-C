#include <iostream>
using namespace std;

int main()
{
    int reais, nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    cin >> reais;

    nota100 = reais / 100;
    reais %= 100;

    nota50 = reais / 50;
    reais %= 50;

    nota20 = reais / 20;
    reais %= 20;

    nota10 = reais / 10;
    reais %= 10;

    nota5 = reais / 5;
    reais %= 5;

    nota2 = reais / 2;
    reais %= 2;

    nota1 = reais;

    cout << nota100 << " nota(s) de R$ 100,00" << endl;
    cout << nota50 << " nota(s) de R$ 50,00" << endl;
    cout << nota20 << " nota(s) de R$ 20,00" << endl;
    cout << nota10 << " nota(s) de R$ 10,00" << endl;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
