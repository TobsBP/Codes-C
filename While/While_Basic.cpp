#include <iostream>
using namespace std;

int main()
{   
    // Stores the number to compare in the while
    int x;

    // imput to the x
    cin >> x;

    // Condition while x > 0 the message will repeat until the number be lower
    while (x > 0)
    {
        cout << "This number is biggier than 0" << endl;
        cin >> x;
    }

    return 0;
}