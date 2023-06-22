#include <iostream>
#include <iomanip>
using namespace std;

void converte(float F, float &C, float &K)
{
    C = (5/9)*(F - 32);
    K = C + 273;
}

int main()
{
    float F; // Armazena a temperatura em Fahrenheit
    float C;
    float K;

    cin >> F;
    converte(F, C, K);

    cout << setprecision(2) << fixed;
    cout << "Celsius: " << C << endl;
    cout << "Kelvin: " << K << endl;


    return 0;
}