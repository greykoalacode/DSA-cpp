#include <iostream>

using namespace std;

int main()
{
    char sentence[1000];
    // using cin.getline to store input

    cin.getline(sentence, 1000, '#');
    // first params: the array where it needs to be stored
    // second params: the capacity of array
    // third params: stop at specific character

    cout << sentence << endl;
    return 0;
}