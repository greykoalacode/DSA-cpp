#include <iostream>
#include <set>
using namespace std;

string removeDuplicate(string s)
{
    set<char, greater<char>> letters;
    for (int i = 0; i < s.length(); i++)
    {
        letters.insert(s[i]);
    }
    s = "";
    for (auto itr = letters.begin(); itr != letters.end(); itr++)
    {
        s = *itr + s;
    }
    return s;
}

int main()
{
    string s = "geeksforgeeks";

    cout << removeDuplicate(s) << endl;
    return 0;
}