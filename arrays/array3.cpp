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
    int smallestindex = -1, largestindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
            smallestindex = i;
        }
        if (num[i] > largest)
        {
            largest = num[i];
            largestindex = i;
        }
    }
    cout << " The Smallest In this array is at index " << smallestindex << " and is " << smallest << endl;
    cout << " The Largest In this array is at index  " << largestindex << " and is" << largest << endl;
    return 0;
}