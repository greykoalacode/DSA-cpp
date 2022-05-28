#include <iostream>
using namespace std;

int main()
{
    // Each string is a character array so this becomes a 2 dimensional char array
    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred"};
    cout << numbers[0] << endl;
    return 0;
}