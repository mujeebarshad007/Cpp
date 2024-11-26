#include <iostream>
using namespace std;
int main () {
int i, isprime;
cout << " Enter Your num,Number for prime check : ";
cin >> num;
isprime =1;
for  (int i=2; i<=num-1; i++)
{
    if (num%i==0)
    {
        isprime =0;
        break;
    }
}
if (isprime==1 && num > 1)
{
    cout << " It is a Prime " << endl;
} else {
    cout << " It is not a Prime "<< endl;
}
    return 0;
}