#include <vector>
#include <iostream>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec)
{
    vector<vector<int>> prefixSum(v.size(), vector<int>(v[0].size(), 0));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            if (i == 0 && j == 0)
            {
                prefixSum[i][j] = v[i][j];
            }
            else if (i == 0)
            {
                prefixSum[i][j] = v[i][j] + prefixSum[0][j - 1];
            }
            else if (j == 0)
            {
                prefixSum[i][j] = v[i][j] + prefixSum[i - 1][0];
            }
            else
            {
                prefixSum[i][j] = v[i][j] + prefixSum[i][j - 1] + prefixSum[i - 1][j] - (prefixSum[i - 1][j - 1]);
            }
        }
    }
    for (vector<int> psRow : prefixSum)
    {
        for (int eachElem : psRow)
        {
            cout << eachElem << " ";
        }
        cout << endl;
    }
    if (sr == 0 && sc == 0)
    {
        return prefixSum[er][ec];
    }
    else if (sr != 0 && sc == 0)
    {
        return prefixSum[er][ec] - (prefixSum[sr - 1][ec]);
    }
    else if (sr == 0 && sc != 0)
    {
        return prefixSum[er][ec] - (prefixSum[er][sc - 1]);
    }
    return prefixSum[er][ec] - ((prefixSum[sr - 1][ec] + prefixSum[er][sc - 1]) - prefixSum[sr - 1][sc - 1]);
}

int main()
{
    vector<vector<int>> vr = {{1, 2, 3, 4, 6}, {5, 3, 8, 1, 2}, {4, 6, 7, 5, 5}, {2, 4, 8, 9, 4}};
    int T;
    cin >> T;
    while (T--)
    {
        int tli, tlj, bri, brj;
        cin >> tli >> tlj >> bri >> brj;
        cout << sum(vr, tli, tlj, bri, brj) << endl;
    }
    return 0;
}