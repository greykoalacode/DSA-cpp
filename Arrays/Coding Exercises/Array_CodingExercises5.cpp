#include <iostream>
#include <vector>

using namespace std;
// rotate Array clockwise k times
vector<int> kRotate(vector<int> a, int k)
{
    int times = k % a.size();
    for (int i = 0; i < times; i++)
    {
        int temp = a.back();
        a.pop_back();
        a.insert(a.begin(), temp);
    }
    return a;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    int k = 2;
    vector<int> result = kRotate(arr, k);
    for (int i : result)
    {
        cout << i << endl;
    }
    return 0;
}