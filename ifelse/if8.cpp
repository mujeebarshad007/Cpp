#include <iostream>
using namespace std;
int main (){
int cp, sp, amt;
cout << " Enter Your Cost Price :";
cin >> cp;
cout << "Enter Selling Price : ";
cin >> sp;
 
 if ( sp > cp ){
  amt = sp - cp;
  cout << " You Gained Profit of : " << amt << endl;
 } else if ( cp > sp ){
amt = cp - sp;
cout << " You Gained loss of : " << amt << endl;

 } else {
  cout << " No Profit, No loss"<< endl;
 }
  return 0;

}