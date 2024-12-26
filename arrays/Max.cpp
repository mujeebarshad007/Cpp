// A problemm from gary J bronson book of finding max and min in array
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    float slopes[9] = {17.24,
                       25.63,
                       5.94,
                       33.92,
                       3.71,
                       32.84,
                       35.93,
                       18.24,
                       6.92};
    float max = INT_MIN;
    float min = INT_MAX;
    int k, l;

    for (int i = 0; i < 9; i++)
    {
        if (slopes[i] > max)
        {
            max = slopes[i];
            k = i;
        }

        if (slopes[i] < min)
        {
            min = slopes[i];
            l = i;
        }
    }

    cout << " The Maximmum value in this array is " << max << " and it is at the index " << k << endl;
    cout << " The Minimum value in this array is " << min << " and it is at the index " << l << endl;
    return 0;
}