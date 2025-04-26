#include <iostream>
#include <fstream>
using namespace std;
void getdat();
void display();

struct Student
{
    int age;
    char name[50];
};
Student stu;
void getdat()
{
    cout << " Enter the Name " << endl;
    cin >> stu.name;
    cin.ignore();
    cout << " Enter the age " << endl;
    cin >> stu.age;
}
void display()
{
    cout << " stu.name" << " \t" << stu.age << endl;
}

int main()
{
    Student stu;
    getdat();

    fstream f;
    f.open("/home/muhib009/Desktop/Binary.bin", ios ::out | ios::binary);
    if (!f)
    {
        cout << " Error Opening The File " << endl;
        return -1;
    }
    else
    {
        f.write((char *)&stu, sizeof(stu));
        f.close();
        cout << "Data Written Successfully" << endl;
    }

    f.open("/home/muhib009/Desktop/Binary.bin", ios ::in | ios::binary);
    if (!f)
    {
        cout << " Error Opening The File " << endl;
        return -1;
    }

    if (f.read((char *)&stu, sizeof(stu)))
    {
        cout << " Data Extracted From File\n";
        display();
    }
    else
    {
        cout << "Error Extracting The File " << endl;
        return -1;
    }
    return 0;
}