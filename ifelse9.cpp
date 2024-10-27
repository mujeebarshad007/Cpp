#include <iostream>
using namespace std;
int main (){
    char ch;
    cout << " Enter alphabet : ";
    cin >> ch;
   if (( ch >= 'a' && ch <= 'z') || ( ch >=  'A' && ch <= 'Z')){
cout << " It is a Alphabet "  << endl;
   } else if ( ch >= '0' && ch <= '9'){
 cout << " It is a Digit " << endl;
   } else {
cout << "It is a special character" << endl;
   }

  return 0;
}
