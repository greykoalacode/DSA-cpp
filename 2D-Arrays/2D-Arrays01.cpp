#include <iostream>
using namespace std;

// Passed by reference
void print(int arr[][100], int n, int m)
{
    // Printing elements
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[100][100];
    // n rows, m columns
    int n, m;
    cin >> n >> m;

    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    print(arr, n, m);
    return 0;
}