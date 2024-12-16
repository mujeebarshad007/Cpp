#include <iostream>
using namespace std;

int Diam(int n1)
{
    int Diamter;
    Diamter = 2 * n1;
    return Diamter;
}

float Circum(int n2)
{
    float Circumference;
    Circumference = 2 * 3.1416 * n2;
    return Circumference;
}
float Ar(int n2)
{
    float Area;
    Area = 3.1416 * (n2 * n2);
    return Area;
}
int main()
{
    int num;
    cout << " Enter The Number You Want to Find Diametr, Circumference and Area = ";
    cin >> num;
    cout << " The Diameter is = " << Diam(num) << endl;
    cout << " The Circumference is = " << Circum(num) << endl;
    cout << " The Area is = " << Ar(num) << endl;

    return 0;
}