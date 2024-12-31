#include <iostream>
#include <cstring>

using namespace std;
int main()
{
      char str[100];
      cout << " Enter yout Desired word = : ";
      cin.getline(str, 100);
      cout << "The Length of the strinng is " << strlen(str) << endl;
      return 0;
}