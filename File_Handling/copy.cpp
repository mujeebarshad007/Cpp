#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    string line;
    ifstream in_file;
    ofstream out_file;
    in_file.open("/home/niko007/Desktop/task.txt");
    if (!in_file)
    {
        cout << " Error in Openeing the Source file " << endl;
        out_file.close();
    }
    out_file.open("/home/niko007/Desktop/Target.txt");
    if (!out_file)
    {
        cout << " Error in Openeing the Target file " << endl;
    }
    if (in_file && out_file)
    {
        while (getline(in_file, line))
        {
            out_file << line << endl;
            cout << line << endl;
        }
        cout << "Copy Finished \n";
    }
    else
    {
        cout << "File not Copied" << endl;
    }
    in_file.close();
    out_file.close();
    return 0;
}
