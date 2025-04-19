#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream inputfile;
    inputfile.open("/home/niko007/Desktop/cpp/File_Handling/task.txt", ios::out);
    if (!inputfile)
    {
        cout << " Error Making File";
    }
    else
    {
        inputfile << "Hello My Name is Mujeeb Arshad\n";
        inputfile << "I am studting in Quaid-e-Azam Uiversity\n";
        cout << "File Was made " << endl;
    }
    inputfile.close();
    return 0;
}