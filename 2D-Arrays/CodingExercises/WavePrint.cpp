#include <iostream>
#include <vector>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    int endCol = n - 1;
    int secondLastCol = n - 2;
    int startRow = 0;
    int endRow = m - 1;
    vector<int> wave;
    while (secondLastCol < endCol && secondLastCol >= 0)
    {
        // Last Row, Top -> Bottom
        for (int row = startRow; row <= endRow; row++)
        {
            wave.push_back(arr[row][endCol]);
        }

        // second last row, bottom -> top
        for (int row = endRow; row >= startRow; row--)
        {
            wave.push_back(arr[row][secondLastCol]);
        }

        // Update variables for next traversal
        endCol = endCol - 2;
        secondLastCol = secondLastCol - 2;
    }
    return wave;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int m = 4, n = 4;
    vector<int> wave = WavePrint(m, n, arr);
    for (int a : wave)
    {
        cout << a << " ";
    }
    return 0;
}