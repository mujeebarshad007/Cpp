#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>
#include <climits>
using namespace std;

class Student
// not take space only object takes memory
{
private:
    string Reg;
    double fee;

public:
    // Constructor always public
    Student()
    {
        depa = "CS";
    }
    int age;
    string name;
    string depa;

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
};

int main()
{

    Student s1; //  Constructor call
    Student s2; //  Constructor call take memory object always when constructor is called.
    s1.name = "Niko";
    s1.setFee(20000);
    cout << s1.name << endl;
    cout << s1.depa << endl;
    // Constructor was CS so it calls cs at the time of object creation only once
    cout << s1.getFee() << endl;
    return 0;
}