#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int n, nota100, nota50, nota20, nota10, nota5, nota2, nota1, moeda1;
    float moeda50, moeda25, moeda10, moeda05, moeda01;

    cin >> n;

    nota100 = n / 100;
    n %= 100;

    nota50 = n / 50;
    n %= 50;

    nota20 = n / 20;
    n %= 20;

    nota10 = n / 10;
    n %= 10;

    nota5 = n / 5;
    n %= 5;

    nota2 = n / 2;
    n %= 2;

    nota1 = n;

    moeda1 = n / 1;
    n %= 1;
    
    moeda05 = n / 5;
    


    cout << setprecision(2) << fixed;
    cout << "NOTAS:" << endl;
    cout << nota100 << " nota(s) de R$ 100,00" << endl;
    cout << nota50 << " nota(s) de R$ 50,00" << endl;
    cout << nota20 << " nota(s) de R$ 20,00" << endl;
    cout << nota10 << " nota(s) de R$ 10,00" << endl;
    cout << nota5 << " nota(s) de R$ 5,00" << endl;
    cout << nota2 << " nota(s) de R$ 2,00" << endl;
    cout << nota1 << " nota(s) de R$ 1,00" << endl;


    return 0;
}