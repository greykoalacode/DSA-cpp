#include <iostream>
using namespace std;

void print(int arr[][10], int n, int m)
{
    // 4 variables
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    // Outer loop (traverse array boundary)
    while (startRow <= endRow && startCol <= endCol)
    {
        // Start Row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }

        // end Col
        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }

        // End row
        for (int col = endCol - 1; col >= startCol; col--)
        {
            // if (startRow == endRow)
            // {
            //     break;
            // }
            if (startCol == endCol)
            {
                break;
            }
            cout << arr[endRow][col] << " ";
        }

        // Start column
        for (int row = endRow - 1; row >= startRow + 1; row--)
        {
            // if (startRow == endRow)
            // {
            //     break;
            // }
            if (startCol == endCol)
            {
                break;
            }
            cout << arr[row][startCol] << " ";
        }

        // update the variables to point to inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main()
{
    // Print in spiral form
    int arr[][10] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4, m = 4;

    print(arr, n, m);
    return 0;
}