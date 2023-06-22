#include <iostream> 
#include <iomanip>
using namespace std;

struct info
{
    int id; // Identificação;
    float im; // Indice de maldade;
    float fa; // Inimigos abatidos;
    double ga; // Media de Maldade e inimigos abatidos
};
    
int main()
{ 
    int i = 0; // Onde começa a armazenar no vetor;
    int x, j; // Usei x para definir a variavel de qual vetor exibir;
    int id; // Pega o id do trooper;
    double mediaM = -1; // Armazena a media maior para definir qual vetor exbir;
    int n; // Armazena o valor de i para não perder a quantidade de inscritos;

    info trooper[100]; // Armazena a informação de 100 clones;
    
    cin >> id;
    while (id != 0)
    {
        // Entrada para o vetor;
        trooper[i].id = id; // Id assume o valor de trooper[i].id;
        cin >> trooper[i].fa; 
        cin >> trooper[i].im;
        trooper[i].ga = (trooper[i].fa + trooper[i].im) / 2; // Calcula a media;
        i++; // Contador para saber a quantidade de inscritos
        cin >> id;  // Entra no loop do while;
    }

    n = i; // N assume o valor de i para não perder a contagem de inscritos;

    // For para saber qual media foi maior;
    for (i = 0; i < n; i++)
    {
        if (trooper[i].ga > mediaM)
        {
            mediaM = trooper[i].ga;
            x = i;
        }
    }
    
    // Exibe as informações do vetor correspondente a x;
    cout << setprecision(2) << fixed;
    cout << "Stormtrooper escolhido: " << trooper[x].id << endl;
    cout << "GA = " << trooper[x].ga << endl;
    
    return 0;
}