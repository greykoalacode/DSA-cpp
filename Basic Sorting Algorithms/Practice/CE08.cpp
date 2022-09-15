#include <iostream>
#include <vector>

using namespace std;
vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    for(int i=0; i<N; i++){
        int prev = i-1;
        pair<int,int> current = v[i];
        while(prev >= 0 && (current.first == v[prev].first ? current.second < v[prev].second : current.first < v[prev].first)){
            v[prev+1] = v[prev];
            prev = prev -1;
        }
        v[prev+1] = current;
    }
    return v;
}

int main()
{
    vector<pair<int, int>> points = {{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}};
    vector<pair<int, int>> results = sortCartesian(points);
    for (pair<int, int> x : results)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}