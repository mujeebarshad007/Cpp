#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream input;
    input.open("/home/muhib009/Desktop/new");
    if (!input)
    {

        cout << "Error opening file" << endl;
        return 1;
    }
    else
    {
        string line;
        while (!input.eof())
        {
            getline(input, line);
            cout << line << endl;
        }
    }
    input.close();
    return 0;
}
