#include <iostream>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}
// Sort elements in increasing order
void bubble_sort(int arr[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        // repeated swapping
        for (int j = 0; j <= (n - times - 1); j++)
        {
            // This J portion is to make sure index goes till last unsorted element which is (n-times-1)
            // times here starts from 1
            if (compare(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, -3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);

    for (int x : arr)
    {
        cout << x << " ,";
    }

    return 0;
}