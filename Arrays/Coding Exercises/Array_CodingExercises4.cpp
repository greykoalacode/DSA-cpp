#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    pair<int, int> closestPair;
    int start = 0;
    int end = arr.size() - 1;
    int closestSum = arr[start] + arr[end];
    while (start < end)
    {
        int currentSum = arr[start] + arr[end];
        if (currentSum == x)
        {
            closestPair.first = arr[start];
            closestPair.second = arr[end];
            return closestPair;
        }
        else
        {
            if (abs(closestSum - x) >= abs(currentSum - x))
            {
                closestPair.first = arr[start];
                closestPair.second = arr[end];
                closestSum = currentSum;
            }
            if (currentSum > x)
                end--;
            else
                start++;
        }
    }
    return closestPair;
}

int main()
{
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int x = 54;
    pair<int, int> closestSumPair = closestSum(arr, x);
    cout << closestSumPair.first << " " << closestSumPair.second << endl;
    return 0;
}