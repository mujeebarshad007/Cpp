#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter your Number : ";
    cin >> n;

    if (( n % 5 == 0 ) && ( n % 11 == 0)) {
cout << " It is divisible by 5 and 11 " << endl;
   } else {
    cout << " It isn't divisible by 5 and 11 " << endl;
   }
   return 0;
}