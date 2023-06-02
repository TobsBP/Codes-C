#include <iostream>
using namespace std;

int main()
{

    // Created Password to contain the Password
    int Password;
    // Here is where we compare with the password
    int imput;

    // Defined the password
    Password = 2550;

    // The prohibited for the password
    cin >> imput;

    // The condichion if the imput is not equal to Password
    if (imput != Password)
    {   
        // If the condichion up is true this will be displayed
        cout << "Password wrong" << endl;
    } else if(imput == Password)
    {   
        // If the condichion up is true this will be displayed
        cout << "Welcome!!" << endl;
    }
    
    return 0;
}