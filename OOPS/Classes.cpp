#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <string>
#include <climits>
using namespace std;

class Student
{
private:
    string Reg;
    double fee;

public:
    int age;
    string name = "Mujeeb";
    string depa = "CS";

    void setFee(double a)
    {
        fee = a;
    }
    double getFee()
    {
        return fee;
    }
};

int main()
{

    Student s1;
    s1.name = "Niko";
    s1.depa = "It";
    s1.setFee(20000);
    cout << s1.name << endl;
    cout << s1.getFee() << endl;
    return 0;
}