#include <iostream>
using namespace std;;
int main(){
int bio, chem,phys,math,comp;
float per;
cout << " Enter Your Biology Marks : ";
cin >> bio;
cout << " Enter Your Physics Marks : ";
cin >> phys;
cout << " Enter Your Chemistry Marks : ";
cin >> chem;
cout << " Enter Your Mathematics Marks : ";
cin >> math;
cout << " Enter Your Computer Marks : ";
cin >> comp;

per = (bio + chem + phys + math + comp)/5.0;

if (per >= 90){
    cout << " Grade A \n";

} else if ( per >=80 ){
cout << " Grade B\n";

} else if ( per >=70 ){
cout << " Grade C\n";

} else if ( per >=60 ){
cout << " Grade d\n";

} else if ( per >=40 ){
cout << " Grade E\n";

} else {
    cout << " Grade F\n";
}
return 0;
}
