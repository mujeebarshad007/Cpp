#include <iostream>
using namespace std;
int main (){
    int year;
    cout << "Enter your year : ";
    cin >> year;
if ( year % 4 == 0){
    cout << " It is a Leap Year " << endl;
} else {
    cout << " It isn't a Leap Year" << endl; 
}
   return 0;
}