#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a_wrong_init[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    // Printing this, gives a garbage value at the end.
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0'};
    cout << a << endl;

    cout << strlen(a) << endl;
    cout << sizeof(a) << endl;

    return 0;
}