#include <iostream>
using namespace std;
int main (){
    int angle1, angle2, angle3, sum;
    cout << " Input First Angle : ";
    cin >> angle1;
    cout << " Input Second Angle : ";
    cin >> angle2;
    cout << " Input Third Angle : ";
    cin >> angle3;
sum = angle1 + angle2 + angle3;
if ( sum == 180){
cout << " It is a Triangle.\n";
} else {
    cout << " It isn't a Triangle\n";
}
return 0;
}