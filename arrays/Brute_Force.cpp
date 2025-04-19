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
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {

            currSum += arr[end]; /* adding sub parts of arrays and comparing them with maxSum*/
            maxSum = max(currSum, maxSum);
        }
    }
    cout << maxSum << endl;

    return 0;
}