#include <iostream>
#include <vector>

using namespace std;

int defkin1(int W, int H, vector<pair<int, int>> position)
{
    int N = position.size();
    vector<int> Wfreq(W + 1, 0);
    vector<int> Hfreq(H + 1, 0);
    Wfreq.push_back(1);
    Hfreq.push_back(1);
    int W_max_diff = 0;
    int H_max_diff = 0;
    for (int i = 0; i < N; i++)
    {
        Wfreq[position[i].first]++;
        Hfreq[position[i].second]++;
    }
    int prev = 0;
    for (int j = 1; j <= W + 1; j++)
    {
        if (Wfreq[j])
        {
            W_max_diff = max(W_max_diff, j - prev - 1);
            prev = j;
        }
    }
    prev = 0;
    for (int j = 1; j <= H + 1; j++)
    {
        if (Hfreq[j])
        {
            H_max_diff = max(H_max_diff, j - prev - 1);
            prev = j;
        }
    }
    return W_max_diff * H_max_diff;
}

int defkin(int W, int H, vector<pair<int, int>> position)
{
    int N = position.size();
    vector<int> Wfreq(W, 0);
    vector<int> Hfreq(H, 0);
    int W_max_diff = INT_MIN;
    int H_max_diff = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        Wfreq[position[i].first - 1]++;
        Hfreq[position[i].second - 1]++;
    }
    // for (int i : Wfreq)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    // for (int i : Hfreq)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    for (int i = 0; i < W; i++)
    {
        int current_Max = 0;
        while (Wfreq[i] == 0)
        {
            current_Max++;
            i++;
        }
        W_max_diff = max(W_max_diff, current_Max);
        // cout << current_Max << " " << W_max_diff << endl;
        cout << W_max_diff << " " << H_max_diff << endl;
    }
    for (int i = 0; i < H; i++)
    {
        int current_Max = 0;
        while (Hfreq[i] == 0)
        {
            current_Max++;
            i++;
        }
        H_max_diff = max(H_max_diff, current_Max);
        // cout << current_Max << " " << H_max_diff << endl;
        cout << W_max_diff << " " << H_max_diff << endl;
    }

    return W_max_diff * H_max_diff;
}

int main()
{
    vector<pair<int, int>> positions = {{3, 8}, {11, 2}, {8, 6}};
    int W = 15;
    int H = 8;
    cout << defkin(W, H, positions) << endl;
    cout << defkin1(W, H, positions) << endl;
    return 0;
}