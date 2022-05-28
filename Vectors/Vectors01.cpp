#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Initialisation
    vector<int> arr = {1, 2, 3, 4, 5};
    // Push_Back O(1)
    arr.push_back(1);

    // Size of vector
    cout << arr.size() << endl;

    // Capacity of vector
    cout << arr.capacity() << endl;
    return 0;
}