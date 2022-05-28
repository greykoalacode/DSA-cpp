#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> optimizedBubbleSort(vector<int> v)
{
    // your code  goes here
    bool sorted = false;
    int n = v.size();
    int times = 1;
    while (!sorted && times < n)
    {
        int counter = 0;
        for (int j = 0; j <= n - times - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                sorted = false;
            }
            else
            {
                counter++;
            }
        }
        if (counter == n - times)
            sorted = true;
        times++;
    }
    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> res = optimizedBubbleSort(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}