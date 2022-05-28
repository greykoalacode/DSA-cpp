#include <iostream>
#include <vector>

using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    for (int j = 1; j < a.size(); j++)
    {
        int current = a[j];
        int prev = j - 1;
        while (prev >= 0 && ((a[prev] > current && flag) || (a[prev] < current && !flag)))
        {
            a[prev + 1] = a[prev];
            prev = prev - 1;
        }
        a[prev + 1] = current;
    }
    return a;
}

int main()
{
    vector<int> a = {-10, 2, 20, 3, -9, 1};
    bool flag = false;
    vector<int> result = sortingWithComparator(a, flag);
    for (int x : result)
    {
        cout << x << " ";
    }
    return 0;
}