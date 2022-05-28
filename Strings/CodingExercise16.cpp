#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(string s)
{
    int power = 1;
    int i = s.length() - 1;
    int result = 0;
    while (i >= 0)
    {
        result += (s[i] - '0') * power;
        power *= 2;
        i--;
    }

    return result;
}
int main()
{
    string s = "111";
    cout << binaryToDecimal(s) << endl;
    return 0;
}