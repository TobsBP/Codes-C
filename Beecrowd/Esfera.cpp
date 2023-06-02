#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double pi = 3.14159;
    double volume;
    float raio;
    
    cin >> raio;

    volume = (4/3.0) * pi * pow(raio,3);

    cout << setprecision(3) << fixed;
    cout << "VOLUME = " << volume << endl;

    return 0;
}