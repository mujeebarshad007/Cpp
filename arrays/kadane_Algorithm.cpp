#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>

using namespace std;
int main()
{
    int n = 7;
    int maxSum = INT_MIN;
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int currSum = 0;
    for (int st = 0; st < n; st++)
    {
        currSum += arr[st];
        currSum = (currSum < 0) ? 0 : currSum; /*Used ternary instead of if else like if currSum
                                                 becomes less then zero never add it to next sum
                                                 becauseit will always make smaller value*/
        maxSum = max(currSum, maxSum);
    }
    cout << " The Maximum Sum is " << maxSum << endl;

    return 0;
}