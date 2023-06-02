#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream arq;
    char nomearq[100];

    // Read the file name from the user
    cin.getline(nomearq, 100);

    // Open the file in input mode
    arq.open(nomearq, ifstream::in);

    // Read the file contents and perform actions
    while (!arq.eof())
    {
        // Perform actions inside the loop
        // You can read data from the file using arq >> variable or getline(arq, variable)

        // Example action: Read a line from the file and print it
        char line;
        // getline(arq, line);
        cout << line << endl;
    }

    // Close the file
    arq.close();

    return 0;
}
