#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demo Vector
    vector<int> arr = {1, 2, 5, 6};

    // Fill constructor
    vector<int> arr1(10, 7);

    // pop back
    arr.pop_back();

    // push back O(1)
    arr.push_back(16);

    // Size of Vector (no of elements)
    cout << arr.size() << endl;

    // Capacity of vector
    cout << arr.capacity() << endl;

    // Print all elements
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << endl;
    }
    return 0;
}