#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> arr)
{
    int maxElement = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        maxElement = max(maxElement, arr[i]);
    }
    return maxElement;
}

int main()
{
    vector<int> arr = {-1, 0, 3, 2};
    cout << largestElement(arr) << endl;
    return 0;
}