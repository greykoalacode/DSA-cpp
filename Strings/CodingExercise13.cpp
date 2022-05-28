#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool arePermutation(string A, string B)
{
    unordered_set<char> letters;
    for (int i = 0; i < A.length(); i++)
    {
        if (letters.find(A[i]) == letters.end())
        {
            letters.insert(A[i]);
        }
    }
    for (int j = 0; j < B.length(); j++)
    {
        if (letters.find(B[j]) == letters.end())
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string A = "abcd";
    string B = "dabc";
    cout << arePermutation(A, B) << endl;
    return 0;
}