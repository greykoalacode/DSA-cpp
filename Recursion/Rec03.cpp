#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){

    // base case
    if(n ==1 || n==0){
        return true;
    }
    // rec case
    if(arr[0] < arr[1] && isSorted(arr+1, n-1)){
        return true;
    }
    return false;

}

// Another approach
bool isSorted2(int arr[], int i, int n){
    if(i == n-1){
        return true;
    }
    if(arr[i] < arr[i+1] && isSorted2(arr, i+1, n)){
        return true;
    }
    return false;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<isSorted(arr, n)<<"\n"<<isSorted2(arr,0,n)<<endl;
    return 0;
}