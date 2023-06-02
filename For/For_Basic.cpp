#include <iostream>
using namespace std;

int main()
{
    // i is to count the for and n is to know how many time will repeat
    int i, n;

    // Imput to n
    cin >> n;

    // While i < n will repeat but i++ get plus one every loop
    for (i = 0; i < n; i++)
    {
        cout << "This message will repeat until the i be biggier than n" << endl;
    }
    
    return 0;
}