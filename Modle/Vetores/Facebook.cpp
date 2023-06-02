#include <iostream> // Biblioteca padrão;
using namespace std; 
int main () 
{
	int usuarios; // Variavel para quantidade de usarios;
	int contatos[1000]; // Vetor para armazenar os contatos;
	int maiorcontatos = -999999; // Variavel para armazenar o numero do contato caso seja maior;
	int menorcontatos= 9999999; // Variavel para armazenar o numero do contato caso seja menor;
	
	cin >> usuarios; // Entrada para quantiade de usarios;
	
	for(int i=0; i<usuarios; i++) // Repetição para armazenar os contatos no vetor;
	{
		cin >> contatos[i];
	}
	
	for(int i = 0;i < usuarios;i++) // Repetição baseada na quantidade de usuarios;
    {
        if(contatos[i] > maiorcontatos) // Se contatos for menor que maiorcontato, maiorcontatos assume esse valor;
        {
            maiorcontatos = contatos[i];
        }
        if(contatos[i] < menorcontatos) // Se contatos for menor que menorcontato, menorcontatos assume esse valor;
        {
            menorcontatos = contatos[i];
        }
    }
    
    cout << "Menor numero de contatos: " << menorcontatos << endl;  // Exibe o menor contato;
    cout << "Maior numero de contatos: " << maiorcontatos << endl; // Exibe o maior contato;

	return 0;
}