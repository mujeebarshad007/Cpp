#include <iostream>
using namespace std;
int main() {
 int num1, num2, num3, num4, num5, sum, average;
 cout << " Enter your first number: ";
 cin >> num1;
 cout << " Enter your secomd number: ";
 cin >> num2;
  cout << " Enter your third number: ";
 cin >> num3;
  cout << " Enter your fourth number: ";
 cin >> num4;
  cout << " Enter your fifth number: ";
 cin >> num5;
 sum = num1 + num2 + num3 + num4 + num5;
 average = sum/5;
 cout << " The average of these Numbers is : " << average << endl;
 return 0;
}
