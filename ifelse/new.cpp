#include <iostream>
using namespace std;
int main (){

int number, count =0;

cout << " Enter Your Number : ";
cin >> number;

if (number == 0)
{
count =1;
} else {
    for ( ; number !=0; number/=10 ) {
count++;
    }

    }
     
cout << count<< endl;
    return 0;
}
 

