// #include<iostream>
// using namespace std;
// int main (){
//   int n;
//   n=4;
//   int num =1;
//   char ch = 'A';
//   // char ch = 'A';
//   for (int i =0; i<n; i++)
//   {
//     for  (int j=i; j>=0; j--)
//     {
//     cout << char(ch + j) << " ";
//     }
//      cout << endl;
//   }
//   ch = ch +1;
//   return 0;
// }
// this will print A then B A then C B A


// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//   n=4;
//   int num =1;
//   char ch = 'A';
//   // char ch = 'A';
//   for (int i =0; i<n; i++)
//   {
//     for ( int j=0; j<i; j++)
//     {
//       cout << " ";
//     }
//     for  (int j=0; j<n-i; j++)
//     {
//     cout << i+1;
//     }
//      cout << endl;
//   }
 
//   return 0;
// } 


// Upper code of 
// 1111
//  222
//   33
//    4



// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//   n=8;
//   for (int i =0; i<n; i++)
//   { 
//     //spcaes
//     for ( int j=0; j<n-i-1; j++)
//     {
//       cout << " ";
//     }
//     //first part
//     for  (int j=1; j<= i+1; j++)
//     {
//     cout << j;
//     }
//     //second part

//     for (int j=i; j>0; j--)
//     {
//       cout <<j;
//     }
//     cout << endl;
  
// } 
// return 0;
// }


// upper code is like
//         1 
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1


#include<iostream>
using namespace std;
int main (){
  
  int  n =4;
  for (int i =0; i<n; i++ )
{ 
  //spaces
  for ( int j =0; j<n-i-1; j++)
  {
    cout << " ";
  }

  cout << "*";
// next spaces inner space 
  if (i!=0)
  {
    for ( int j =0; j<2*i-1; j++)
    {
      cout << " ";
    }

    cout << "*";
  }
  cout << endl;
}

  // Bottom part
  for ( int i =n; i>0; i--)
  return 0;
}