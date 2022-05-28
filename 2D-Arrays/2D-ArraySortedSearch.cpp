#include <iostream>
using namespace std;

pair<int, int> sortedSearch2D(int arr[][4], int n, int m, int elem)
{
    int endCol = m - 1;
    int startRow = 0;
    if (elem < arr[0][0] && elem > arr[n - 1][m - 1])
    {
        return {-1, -1};
    }
    while (endCol >= 0 && startRow <= n - 1)
    {

        if (arr[startRow][endCol] == elem)
        {
            return {startRow, endCol};
        }
        else if (arr[startRow][endCol] > elem)
        {
            endCol--;
        }
        else
        {
            startRow++;
        }
    }
    return {-1, -1};
}

int main()
{

    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    int n = 4, m = 4;
    int elem = 33;
    pair<int, int> indexes = sortedSearch2D(arr, n, m, elem);
    cout << indexes.first << " " << indexes.second << endl;
    return 0;
}