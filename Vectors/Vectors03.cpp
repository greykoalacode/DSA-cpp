#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 11, 2, 3, 4, 5, 6, 7, 8};
    int key = 13;
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    if (it != arr.end())
    {
        cout << "Present at " << it - arr.begin() << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}