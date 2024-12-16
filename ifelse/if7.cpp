#include <iostream>
using namespace std;
int main (){
int side1, side2, side3;
cout << " Enter side1 : ";
cin >> side1;
cout << " Enter side2 : ";
cin >> side2;
cout << " Enter side3 : ";
cin >> side3;

if ( side1 == side2 && side2 == side3 && side3 == side1 ){
    cout << " It is a equilateral Triangle.\n";

} else if ( side1 == side2  || side2 == side3 || side3 == side1 ){
    cout << " It is an isosceles Triangle.\n";
} else {
    cout << " It is a Scalene Triangle.\n";
}
return 0;
}

