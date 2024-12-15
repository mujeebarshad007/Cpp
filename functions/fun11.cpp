#include <iostream>
using namespace std;
float Vol(float);
float Vol(float n1, float n2)
{
    float volume = 3.1416 * (n1 * n1) * n2;
    return volume;
}

int main()
{
    float rad, length;
    cout << " Enter the radius ;";
    cin >> rad;
    cout << " Enter the length :";
    cin >> length;
    cout << " The Volume of cylinder is given as : " << Vol(rad, length);
}