#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int maxSumSubarray(vector<int> A)
{
    int cs = 0;
    int largest = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        cs = cs + A[i];
        largest = max(largest, cs);
        if (cs < 0)
        {
            cs = 0;
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {1, 3, 4, 0, -1, -1, -2};

    cout << maxSumSubarray(arr) << endl;
}