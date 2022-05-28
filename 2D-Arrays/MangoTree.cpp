#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void mangoTree(vector<string> &arr, int N)
{
    vector<vector<int>> sumArr(N, vector<int>(N, 0));
    sumArr[0][0] = arr[0][0] == '#' ? 1 : 0;
    for (int i = 1; i < N; i++)
    {
        sumArr[0][i] = arr[0][i] == '#' ? 1 + sumArr[0][i - 1] : sumArr[0][i - 1];
        sumArr[i][0] = arr[i][0] == '#' ? 1 + sumArr[i - 1][0] : sumArr[i - 1][0];
    }
    // sumArr[0][1] = arr[0][1] == '#' ? 1 + sumArr[0][0] : sumArr[0][0];
    // sumArr[1][0] = arr[1][0] == '#' ? 1 + sumArr[0][0] : sumArr[0][0];

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            if (arr[i][j] == '#')
            {
                sumArr[i][j] = 1 + sumArr[i][j - 1] + sumArr[i - 1][j] - sumArr[i - 1][j - 1];
            }
            else
            {
                sumArr[i][j] = sumArr[i][j - 1] + sumArr[i - 1][j] - sumArr[i - 1][j - 1];
            }
        }
    }
    // DEbug
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << sumArr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int Max_Trees = INT_MIN;
    pair<int, int> maxPoints = {0, 0};
    for (int k = 0; k < N; k++)
    {
        for (int l = 0; l < N; l++)
        {
            int S1 = sumArr[k][l];
            int S2 = sumArr[k][N - 1] - sumArr[k][l];
            int S3 = sumArr[N - 1][l] - sumArr[k][l];
            int S4 = sumArr[N - 1][N - 1] - (S1 + S2 + S3);
            int minTreesOfFour = min({S1, S2, S3, S4});
            Max_Trees = max(Max_Trees, minTreesOfFour);
            if (Max_Trees == minTreesOfFour)
            {
                maxPoints = {k, l};
                // Debug
                // cout << k << " " << l << endl;
                // cout << S1 << " " << S2 << " " << S3 << " " << S4 << endl;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        arr[i].insert(maxPoints.second + 1, "|");
    }
    string dashes(N + 1, '-');
    arr.insert(arr.begin() + maxPoints.first + 1, dashes);
}

int main()
{

    vector<string> arr = {".##...", "#..##.", ".#....", ".##..#", "#..##.", ".#...."};
    int N = 6;
    mangoTree(arr, N);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].length(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}