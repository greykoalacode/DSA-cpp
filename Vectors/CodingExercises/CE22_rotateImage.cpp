#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int N = matrix.size();
    for (int i = 0; i < N / 2; i++)
    {
        for (int j = i; j < N - i - 1; j++)
        {
            int current = matrix[i][j];
            matrix[i][j] = matrix[N - j - 1][i];
            matrix[N - j - 1][i] = matrix[N - i - 1][N - j - 1];
            matrix[N - i - 1][N - j - 1] = matrix[j][N - i - 1];
            matrix[j][N - i - 1] = current;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (vector<int> row : matrix)
    {
        for (int eachElement : row)
        {
            cout << eachElement << " ";
        }
        cout << endl;
    }
    rotate(matrix);
    cout << endl;
    for (vector<int> row : matrix)
    {
        for (int eachElement : row)
        {
            cout << eachElement << " ";
        }
        cout << endl;
    }
    return 0;
}