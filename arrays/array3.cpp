// Program of Finding smallest and Largest in an array
#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int num[] = {20,
                 30,
                 5,
                 -1,
                 22,
                 100,
                 1000,
                 1023,
                 40};
    int size = 9;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = i;
        }
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << " The Smallest In this array is at = " << i << endl;
    cout << " The Largest In this array is at= " << largest << endl;
    return 0;
}