#include <iostream>
using namespace std;

int main()
{
    // Contain the Size 
    int Size1;
    int Size2; 
    int Size3;
    
    // Imput to the variable
    cin >> Size1;
    cin >> Size2;
    cin >> Size3;

    // Condition to know what is the type
    if (Size1 == 0 || Size2 == 0 || Size3 == 0)
    {
        cout << "Its not a triangle" << endl;
    }else if (Size1 == Size2 && Size3 == Size1)
        {
            cout << "Equilateral triangle" << endl;
        } else if( Size1 == Size2 && Size3 != Size1)
            {
                cout << "Isosceles triangle" << endl;
            }else 
                {
                    cout << "Scalene triangle" << endl;
                }
    
    return 0;
}