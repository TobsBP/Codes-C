#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int calc_raizes(float a, float b, float c, float &x1, float &x2)
{
    float d;
    int r;

    d = pow(b, 2) - 4 * a * c;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        r = 0;
    } else if(d < 0)
    {
        r = 1;
    }
    
    return r;
}

int main()
{
    float a, b, c;
    float x1 = 0;
    float x2 = 0;
    int r;

    cin >> a >> b >> c;

    r = calc_raizes(a, b, c, x1, x2);

    cout << setprecision(2) << fixed;
    if (r == 1)
    {
        cout << "Nao ha raizes reais" << endl;
    } else if (r == 0)
    {
        cout << "X2 = " << x2 << endl;
        cout << "X1 = " << x1 << endl;
    } else if (x1 == 0 && x2 == 0)
    {
        cout << "x = 0" << endl;
    }

    return 0;
}