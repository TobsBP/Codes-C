#include <iostream>
#include <iomanip>
using namespace std;

float ideal(float h, char sexo)
{
    // Condição para saber qual conta fazer
    float c;
    if (sexo == 'M')
    {
        c = 72.7 * h - 58;
    } else if(sexo == 'F')
    {
        c = 62.1 * h - 44.7;
    }

    return c;    
}

int main()
{
    float h; // Armazena a altura 
    char sexo; // Armazena o sexo
    float peso; // Armazena o peso

    // Entrada 
    cin >> h >> sexo;

    // Chama a função ideal
    peso = ideal(h, sexo);

    // Exibe 
    cout << setprecision(2) << fixed;
    cout << "Peso ideal = " << peso << " kg" << endl;

    return 0;
}