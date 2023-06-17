#include <iostream>
using namespace std;

float media(int notas[], int nAlunos)
{
    float m;
    int s = 0;
    int i;
    for (i = 0; i < nAlunos; i++)
    {
        s += notas[i];
    }
        m = s / nAlunos;

    return m;
}

int main()
{
    int notas[100];
    int i, n, s;
    float m;

    cin >> n;  

    for (i = 0; i < n; i++)
    {
        cin >> notas[i];
        media(notas, i);
    }
    
    cout << m << endl;


    return 0;
}