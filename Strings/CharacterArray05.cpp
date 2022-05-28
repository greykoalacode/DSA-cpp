#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];
    // Calculate length
    cout << strlen(a) << endl;

    // strcpy
    strcpy(b, a);
    cout << b << endl;

    // Compare Strings
    cout << strcmp(a, b) << endl;

    // Concat String
    char web[] = "www.";
    char domain[] = "codingminutes.com";

    cout << strcat(web, domain) << endl;
    return 0;
}