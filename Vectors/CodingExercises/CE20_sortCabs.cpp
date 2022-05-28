#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool comparePoints(pair<int, int> p, pair<int, int> q)
{
    float distanceP = sqrt(p.first * p.first + p.second * p.second);
    float distanceQ = sqrt(q.first * q.first + q.second * q.second);

    return distanceP < distanceQ;
}
// STL
// sort(v.begin(), v.end(), comparePoints);

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    for (int pos = 0; pos <= v.size() - 2; pos++)
    {
        pair<int, int> current = v[pos];
        int min_position = pos;
        for (int j = pos; j < v.size(); j++)
        {
            if (comparePoints(v[j], v[min_position]))
            {
                min_position = j;
            }
        }
        swap(v[pos], v[min_position]);
    }
    return v;
}

int main()
{
    vector<pair<int, int>> v = {
        {2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};

    vector<pair<int, int>> res = sortCabs(v);
    for (pair<int, int> p : res)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
