//  Gary J. Bronson Chapter  7.3 Question 7
#include <iostream>
using namespace std;
float calavg(float array[], int sz)
{
    float avg;
    float sum = 0;
    for (int i = 0; i < sz; i++)
    {
        sum += array[i];
    }
    avg = sum / sz;
    return avg;
}
float calcvariance(float array1[], int siz, float avg)
{
    float sum_sq_diff = 0;
    for (int i = 0; i < siz; i++)
    {
        sum_sq_diff += (array1[i] - avg) * (array1[i] - avg);
    }
    return sum_sq_diff / siz;
}
int main()
{
    float testvals[] = {89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, 73};
    int size = 14;
    float average;
    float variance;
    average = calavg(testvals, size);
    variance = calcvariance(testvals, size, average);

    cout << " The Average of this array is => " << average << endl;
    cout << " The variance of this array is => " << variance << endl;
    return 0;
}