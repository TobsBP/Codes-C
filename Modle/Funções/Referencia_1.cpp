#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void media(int x, int y, float &m)
{
    m = sqrt(x * y);        
}

int main()
{
    float m;
    int x = 0;
    int y = 0;  

        cin >> x >> y;

        media(x, y, m);
    
        // Mostrando 
        cout << setprecision(2) << fixed;
        cout << "Media: " << m << endl;

    return 0;
}