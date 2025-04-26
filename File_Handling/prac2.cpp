#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream input;
    input.open("/home/muhib009/Desktop/new", ios::out);
    if (!input)
    {
        cout << "Error" << endl;
    }
    else
    {
        cout << " Data written successcully\n";
        input << " Hello My name is Mujeeb\n";
        input << " Where Are you yums\n";
        input.close();
    }
    return 0;
}
