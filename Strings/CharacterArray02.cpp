#include <iostream>

using namespace std;

int main()
{
    // get input with the help of cin.get()
    char sentence[100];
    char temp = cin.get();
    int len = 0;
    while (temp != '#')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout << len << endl;
    cout << sentence << endl;
    return 0;
}