#include <iostream>

using namespace std;

// given a sentence, count the number of alphabets, digits and spaces in the sentence

int main()
{
    // store and then count
    // no need to store here, so second option will be chosen.

    // read one by one and count
    char ch;
    ch = cin.get();

    // Count
    int alpha = 0;
    int space = 0;
    int digit = 0;

    while (ch != '\n')
    {
        if (ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        {
            alpha++;
        }
        else if (ch == ' ' || ch == '\t')
        {
            space++;
        }
        ch = cin.get();
    }
    cout << "Total Alphabets: " << alpha << endl;
    cout << "Total Numbers: " << digit << endl;
    cout << "Total Spaces: " << space << endl;
    return 0;
}