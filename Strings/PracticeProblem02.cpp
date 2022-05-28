#include <iostream>
#include <cstring>

using namespace std;

// Problem: Read N strings, and print the largest string.
// Each string can have upto 1000 characters

int main()
{
    char largestString[1000];
    int largestLen = INT_MIN;

    int n;
    cin >> n;

    char sentence[1000];
    cin.get();
    while (n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if (len > largestLen)
        {
            largestLen = len;
            strcpy(largestString, sentence);
        }
    }
    cout << "Largest String is: " << largestString << endl;
    return 0;
}