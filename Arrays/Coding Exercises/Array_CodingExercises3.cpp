#include <iostream>
#include <vector>

using namespace std;

int lowerBound(vector<int> A, int Val)
{
    int start = 0;
    int end = A.size() - 1;
    if(Val > A[A.size()-1])
        return A[A.size()-1];
    if(Val < A[0])
        return -1;
    while (start <= end)
    {
        int mid = start + end / 2;
        if (A[mid] == Val)
        {
            return Val;
        }
        else if (A[mid] > Val)
        {
            return A[mid - 1];
        }
        else
        {
            return A[mid + 1];
        }
    }
    if (Val < A[start])
    {
        return -1;
    }
    return A[start];
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 6};
    int Val = 5;
    cout << lowerBound(A, Val) << endl;
    return 0;
}