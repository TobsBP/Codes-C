#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // vetores pedidos na questao
    // vetores pedidos na questao
    int x[100];
    int y[100];
    char op[100];
    double z[100];
    int i, n; // i para contar as repetiçõs e 'n' é a quantidade de repetição

    // Quantatidade de repetição do for
    cin >> n;
    for (i = 0; i < n; i++)
    {
        //Entrada para os vetores
        while(i < n)
        {
            cin >> x[i];
            i++;
        }

        i = 0;

        while(i < n)
        {
            cin >> y[i];
            i++;
        }

        for (i = 0; i < n; i++)
        {
            cin >> op[i];
        
            // Condição para fazer as operações
            if (op[i] == '*')
            {
                z[i] = x[i] * y[i];
            } else if (op[i] == '/')
            {
                z[i] = (float)(x[i]) / y[i];
            } else if (op[i] == '+')
            {
                z[i] = x[i] + y[i];
            } else if (op[i] == '-')
            {
                z[i] = x[i] - y[i];
            }
        }
    }
    
    // Exibindo
    for (i = 0; i < n; i++)
    {  
        if (op[i] == '/')
        {
            cout << setprecision(2) << fixed;
            cout << x[i] << " " << op[i] << " " << y[i] << " = " << z[i] << endl;
        }else {
        cout << setprecision(0) << fixed;
        cout << x[i] << " " << op[i] << " " << y[i] << " = " << z[i] << endl;
        }
    }

    return 0;
}