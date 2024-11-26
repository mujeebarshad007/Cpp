#include <iostream>
using namespace std;
int main ()
{
double year, weight, weightclass, registrationfee;


cout << " Enter The Model Of year = ";
cin >> year;
cout << " Enter the Weight = ";
cin >> weight;

if ( year <= 1990 )
{
        if ( weight < 2700)
    {
        weightclass = 1;
        registrationfee= 26.50;
    }
else if (weight >= 2700 && weight <=3800)
    {
        weightclass = 2;
        registrationfee= 35.50;
    }
else if (weight >3800)
    {
        weightclass = 3;
        registrationfee= 56.50;
    }

} 
    if ( year >= 1991 && year <= 1999 )
{
    if  ( weight < 2700)
     {
        weightclass = 4;
        registrationfee= 35.00;
     }
else if (weight >= 2700 && weight <=3800)
    {
        weightclass = 5;
        registrationfee= 45.00;
    } 
else if (weight >3800)
    {
        weightclass = 6;
        registrationfee= 62.50;
    }

   
} 
   if ( year >=2700)
{

          if ( weight < 3500 )
    {
        weightclass = 7;
        registrationfee= 49.50;
    }
else if ( weight >= 3500)
    {
        weightclass = 8;
        registrationfee= 62.50;
    }


}

cout << " The weight Class of this Model is " << weightclass <<endl;
cout << " The registrationfee of this Model is " << registrationfee <<endl;

return 0;

}