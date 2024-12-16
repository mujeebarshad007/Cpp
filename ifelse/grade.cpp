#include <iostream>
using namespace std;;
int main(){
int marks;;
cout << " ENter Your Marks ";
cin >> marks;
if ( marks >= 90){
   cout << " A "<< endl;
} else if ( marks >=  80){
   cout << " B " << endl;
} else {
   cout << " C " << endl;
}
return 0;
}
