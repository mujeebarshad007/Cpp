#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("/home/niko007/Desktop/cpp/File_Handling/task.txt", ios::app);
    if (!file)
    {
        cout << " Error Openeing the File" << endl;
    }
    else
    {
        file << "This is the Appended lines" << endl;
        cout << " Data Appended Successfullly" << endl;
        file.close();
    }

    // ifstream readFile;
    // readFile.open("/home/niko007/Desktop/cpp/File_Handling/task.txt");
    // if (!readFile)
    // {
    //     cout << "Error opening file for reading!" << endl;
    // }

    // cout << "Reading THe File\n";
    // string line;
    // while (getline(readFile, line))
    // {
    //     cout << line << endl;
    // }
    // readFile.close();
    return 0;
}