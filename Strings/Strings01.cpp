#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Dynamic Array
    string s;
    // Ways of initialising
    // string s = "hello world";
    // string s("Hello world");

    // Input
    getline(cin, s);

    // Iterate over string
    for (char ch : s)
    {
        cout << ch << ",";
    }

    cout << endl;
    cout << s << endl;
    return 0;
}