#include <iostream> // Biblioteca padrão;
using namespace std;

int main()
{
    int i; // Contador do for;
    int N; // Quantidade de repetição;
    int v[10]; // Armazena os votos;
    int like = 0; // Armazena se a pessoa gostou;
    int deslike = 0; // Armazena se a pessoa não gostou;

    cin >> N;
    for (i = 0; i < N; i++) // Repetição do for baseado no contador N;
    {
        cin >> v[i]; // Entrada para os votos;

        if (v[i] > 0) // Condição se é maior que 0 a pessoa gostou;
        {
            like++; // Aumenta 1 na variavel caso a condição seja verdadeira;
        } else if(v[i] < 0) // Se é menor que 0 a pessoa não gostou;
        {
            deslike++; // Aumenta 1 na variavel caso a condição seja verdadeira;
        }
        
    }
    
    if (like > deslike) // Condição para exibir baseano nos votos;
    {
        cout << "A maioria gostou" << endl;
    }else if(like < deslike)
    {
        cout << "A maioria nao gostou" << endl;
    }else 
        cout << "Deu empate" << endl;
    
    return 0;
}