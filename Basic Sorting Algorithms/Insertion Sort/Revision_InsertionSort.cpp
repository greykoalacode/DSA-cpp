// Revision
#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    int prev = 0;
    for(int current = 1; current < n; current++){
        int temp = arr[current];
        while(prev >= 0 && temp < arr[prev]){
            arr[prev+1] = arr[prev];
            prev = prev-1;
        }
        arr[prev+1] = temp;
        prev = current;
    }

    // Improvisation
    // instead of prev = 0 then prev = current, it could be initialised
    // within the for loop as prev = current-1
}


int main(){
    int arr[] = {20,3,-10,30,5,2,13};
    int n = 7;
    insertion_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}