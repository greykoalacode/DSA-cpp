#include <iostream>
#include <vector>

using namespace std;

int pairSticks(vector<int> length, int D)
{
    // To keep the count of pairs
    int pairCount = 0;

    // Logic: To use selection sort, to put the made pairs on one side and rest numbers on other side.
    // Let's debug
    for (int pos = 0; pos < length.size() - 1; pos++)
    {
        int current = length[pos];
        int min_position = pos;
        cout << "Current :" << current << endl;
        cout << "Min Position: " << min_position << endl;
        for (int j = pos + 1; j < length.size(); j++)
        {
            cout << length[j] << endl;
            if (abs(length[j] - current) <= D)
            {
                min_position = j;
                pairCount++;
                break;
            }
        }
        swap(length[min_position], length[pos]);
    }
    return pairCount;
}

int main()
{
    vector<int> length = {1, 3, 3, 9, 4};
    int x = 2;
    cout << pairSticks(length, x) << endl;
    return 0;
}