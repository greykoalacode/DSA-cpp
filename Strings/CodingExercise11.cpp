#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(string str)
{
    int N = str.length();
    for (int i = 0; i < N / 2; i++)
    {
        if (str[i] != str[N - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string inputStr = "abab";
    cout << isPalindrome(inputStr) << endl;
    return 0;
}