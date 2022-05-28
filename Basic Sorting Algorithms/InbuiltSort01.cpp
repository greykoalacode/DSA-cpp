#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main()
{
    int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n);
    // using a comparator
    sort(arr, arr + n, compare);
    // Inbuilt Function to reverse array
    reverse(arr, arr + n);

    // in built comparator
    sort(arr, arr + n, greater<int>());
    // print the output
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}