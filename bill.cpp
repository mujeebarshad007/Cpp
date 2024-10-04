#include <iostream>
using namespace std;
int main() {
 double meal_cost, tax_amount, tip_amount, total_bill,  meal_cost_with_tax;
 cout << " Enter Your meal cost : ";
 cin >> meal_cost;
 tax_amount = meal_cost * 20/100;
 meal_cost_with_tax = meal_cost + tax_amount;
 tip_amount = meal_cost_with_tax * 10/100;
 total_bill = meal_cost_with_tax + tip_amount;
 cout << " Meal Cost is : " << meal_cost << endl 
  << " Tax Amount Is : " << tax_amount << endl 
  << " Tip Amount Is : " << tip_amount << endl
  << " Total Bill Is : " << total_bill << endl;
 return 0;
}
