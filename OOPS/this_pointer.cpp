#include <iostream>
#include <string>
#include <climits>
using namespace std;

// This Pointer is used for like solving the issue of same names,
// like if object property aslo have same name and on the other side any paramter has also that
// name then we use this following with -> to resolve this issue.

class Student
{

private:
    double fee;

public:
    int age;
    string name;
    string depa;

    Student(string name, string depa, double fee) // Now here our paramter and attribute have same name so we use this pointer
    {
        this->name = name;
        this->depa = depa; // The left side variables are actually the object/entity attributes
        this->fee = fee;
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