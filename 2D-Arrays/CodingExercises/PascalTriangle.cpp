#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> pascalTriangle;
    for (int i = 0; i < n; i++)
    {
        vector<int> pascalRow;
        int index = 0;
        for (int j = 0; j <= i; j++)
        {
            int num;
            if (j == 0 || j == i)
            {
                pascalRow.push_back(1);
            }
            else
            {
                while (index != i - 1)
                {
                    pascalRow.push_back(pascalTriangle[i - 1][index] + pascalTriangle[i - 1][index + 1]);
                    index++;
                }
            }
        }
        pascalTriangle.push_back(pascalRow);
    }
    return pascalTriangle;
}

int main()
{
    int N = 6;
    vector<vector<int>> pascalTriangle = printPascal(N);
    for (vector<int> pascalRow : pascalTriangle)
    {
        for (int eachElement : pascalRow)
        {
            cout << eachElement << " ";
        }
        cout << endl;
    }
    return 0;
}