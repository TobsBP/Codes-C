#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, maiorab, maiorac;

    cin >> a >> b >> c;

    maiorab = ((a + b + abs(a - b)) / 2 );

    maiorac = ((c + maiorab + abs(c - maiorab)) / 2 );

    cout <<  maiorac << " eh o maior" << endl;

    return 0;
}