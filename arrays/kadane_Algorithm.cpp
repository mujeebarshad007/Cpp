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
        maxSum = max(currSum, maxSum);
        currSum = (currSum < 0) ? 0 : currSum; /*Used ternary instead of if else like if currSum
                                                 becomes less then zero never add it to next sum
                                                 becauseit will always make smaller value*/
    }
    cout << " The Maximum Sum is " << maxSum << endl;

    return 0;
}

/*Why I placed the if else at the end?
for example If i had an array of all negative values and then I will get zero in dsiplay
for this reason I placed it in the end because by doing this it will give me negative max value
if the whole array consists of negative values*/