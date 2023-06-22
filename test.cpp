#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char palavra1[100];
    char palavra2[100];
    char palavra3[100];

    cin.getline(palavra1, 100);
    cin.getline(palavra2, 100);
    cin.getline(palavra3, 100);
    
    if (strcmp(palavra1, palavra2) < 0 && strcmp(palavra1, palavra3) < 0)
    {
        cout << palavra1 << " " << palavra2 << " " << palavra3 << endl;
    } else if (strcmp(palavra2, palavra1) < 0 && strcmp(palavra2, palavra3) < 0)
    {
        cout << palavra2 << " " << palavra1 << " " << palavra3 << endl;
    } else if (strcmp(palavra3, palavra1) < 0 && strcmp(palavra3, palavra2) < 0)
    {
        cout << palavra3 << " " << palavra2 << " " << palavra3 << endl;
    }
    
    
    

    return 0;
}