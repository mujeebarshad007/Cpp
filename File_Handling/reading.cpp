#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream writing;
    writing.open("/home/niko007/Desktop/cpp/File_Handling/task.txt", ios::in);
    if (!writing)
    {
        cout << " Error in Reading the file\n";
    }
    else
    {
        string line;
        while (!writing.eof())
        {
            getline(writing, line);
            cout << line << endl;
        }
    }
    writing.close();
    return 0;
}