#include <iostream>
using namespace std;
int main() {
 char ch;
 cout << " Enter Your character : ";
 cin >> ch;
 if (( ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch  <= 'Z')){
cout << ch << " is is a alphabet " << endl;
 } else{
    cout << ch << "isn't a alphabet " << endl;
 }
 return 0;
}
