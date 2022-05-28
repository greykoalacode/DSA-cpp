#include <iostream>
using namespace std;

// First Occurence
// Find the first occurence of an element in array 

int firstOccurence(int arr[], int n, int key){
    // base case
    if(n == 0){
        return -1;
    }

    // recursive case
    if(arr[0] == key){
        return 0;
    } 
    if(firstOccurence(arr+1, n-1, key)!= -1){
        return firstOccurence(arr+1,n-1, key)+1;
    }
    return -1;
    
}

int lastOccurence(int arr[], int n, int key){
    // base case
    if(n == 0){
        return -1;
    }

    // recursive case
    int subIndex = lastOccurence(arr+1, n-1, key);
    if(subIndex == -1){
        if(arr[0] == key){
            return 0;
        } else {
            return -1;
        }
    }
    else {
        return subIndex+1;
    }
}


int main(){
    int arr[] = {1,3,5,7,6,2,5};
    int n = sizeof(arr)/sizeof(int);
    int key = 5;
    cout<<firstOccurence(arr,n,key)<<endl;
    cout<<lastOccurence(arr,n,key)<<endl;
    return 0;
}