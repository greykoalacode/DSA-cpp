#include <iostream>
using namespace std;

void printAllSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // cout << "(" << i << "," << j << "), ";
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
        cout << endl;
    }
}
// Print the sum of each subarray & find out the largest sum

// Brute Force
int largestSubarraySum1(int arr[], int n)
{
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int eachSubarraySum = 0;
            for (int k = i; k <= j; k++)
            {
                // cout << arr[k] << ",";
                eachSubarraySum += arr[k];
            }
            // cout << endl;
            cout << eachSubarraySum << ",";
            largestSum = max(eachSubarraySum, largestSum);
        }
        cout << endl;
    }
    return largestSum;
}

// Prefix sum approach
int largestSubarraySum2(int arr[], int n)
{
    // Initialising Prefix sum

    // Variable can not be used to initialise here. so commenting the below line and doing
    // int prefix[n] = {0};
    int prefix[100] = {0};
    // Else use Vector or dynamic array

    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int largestSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int eachSubarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            // cout << endl;
            cout << eachSubarraySum << ",";
            largestSum = max(eachSubarraySum, largestSum);
        }
        cout << endl;
    }
    return largestSum;
}

// Kadane's Algorithm
int maximum_subarray_sum(int arr[], int n)
{
    int cs = 0;
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        largest = max(largest, cs);
    }
    return largest;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    // printAllSubarrays(arr, n);
    int largestSum = largestSubarraySum1(arr, n);
    int largestSum2 = largestSubarraySum2(arr, n);
    int maxSum = maximum_subarray_sum(arr, n);
    cout << largestSum << endl;
    cout << largestSum2 << endl;
    cout << maxSum << endl;
    return 0;
}