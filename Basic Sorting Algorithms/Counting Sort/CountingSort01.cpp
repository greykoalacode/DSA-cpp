#include <iostream>
using namespace std;

void counting_sort(int a[], int n)
{
    // largest element
    int largest = -1;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, a[i]);
    }

    // create count array
    int *freq = new int[largest + 1]{0};
    // int freq[largest + 1] = {0};

    // update the count array
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    // Put back elements to original array
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{
    int arr[] = {5, 3, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(int);
    counting_sort(arr, n);

    for (int x : arr)
    {
        cout << x << " ,";
    }
    return 0;
}