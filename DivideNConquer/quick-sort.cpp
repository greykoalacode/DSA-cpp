#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int s, int e){
    int pivot = arr[e];
    int i = s-1;
    for(int j=s; j <e; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    
    swap(arr[i+1], arr[e]);
    return i+1;
}

void quicksort(vector<int> &arr, int s, int e){
// base case
if(s >= e){
    return;
}
// recursive case
int p = partition(arr, s,e);
quicksort(arr, s, p-1);
quicksort(arr, p+1, e);
}

int main(){

    vector<int> arr{10,5,2,0,7,6,4};
    int s = 0;
    int e = arr.size()-1;
    quicksort(arr, s, e);
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
}