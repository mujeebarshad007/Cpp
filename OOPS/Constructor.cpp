#include <iostream>
#include <string>
#include <climits>
using namespace std;

// Lets learn Constructor -> Three types
// non pramaetrized
// have paramters
// copy constructor

class Student
{

private:
    double fee;

public:
    int age;
    string name;
    string depa;

    // Non paramterized
    // Student()
    // {
    //     depa = "CS";
    // }

    //  Paramterized
    // basically we give paramters so that we don't have to give values every time in main:
    Student(string n, string d, double f)
    {
        name = n;
        depa = d;
        fee = f;
    }

    // setter
    void setFee(double a)
    {
        fee = a;
    }

    // getter
    double getFee()
    {
        return fee;
    }

    void getInfo()
    {
        cout << "  Name : " << name << endl;
        cout << "  Department : " << depa << endl;
    }
};

int main()
{

    Student s1("NIKO", "CS", 20000);
    s1.getInfo();
    return 0;
}