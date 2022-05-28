#include <iostream>
using namespace std;

string vowel(string s)
{
    string vowelList;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowelList += s[i];
        }
    }
    return vowelList;
}
int main()
{
    string s = "aeoibsddaeioudb";
    cout << vowel(s) << endl;
    return 0;
}