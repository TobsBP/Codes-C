#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float m[2][2];
    int c, l;
    float d;

    for (l = 0; l < 2; l++)
    {
        for (c = 0; c < 2; c++)
        {
            cin >> m[l][c];

        }
    }

    cout << setprecision(4) << fixed;

    // Matriz
    // for (l = 0; l < 2; l++)
    // {
    //     for (c = 0; c < 2; c++)
    //     {
    //        cout << "M = " << m[l][c]  << " ; "; 
    //     }   
    // }

    // Determinante
    // d = m[0][0] * m[1][1] -(m[0][1] * m[1][0]);
    // cout << "Determinante de M = " << d << endl;

    // Tasnposta
    cout << "Transposta de M = [";

    for (c = 0; c < 1; c++)
    {
        for (l = 0; l < 2; l++)
        {
            cout  << m[l][c] << " ";
        }
    }
    
    cout << " ; ";

    for (c = 1; c < 2; c++)
    {
        for (l = 0; l < 2; l++)
        {
            cout << m[l][c] << " ";
        }
        
    }
    
    cout << "]";

    return 0;
}