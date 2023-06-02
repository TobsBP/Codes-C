#include <iostream>
using namespace std;

int main()
{
    // Int is a variable tha contain only numbers
    int x;
    int n;

    // A variable to contain the result of the sum
    int s;

    // The input
    cout << "Put a number: " << endl;
    cin >> x;
    cout << "Put another numberd: " << endl;
    cin >> n;

    // The operation
    s = x + n;

    // Showing the result
    cout << "The result of " << x << "+" << n << " is: " << s << endl;

    return 0;
}