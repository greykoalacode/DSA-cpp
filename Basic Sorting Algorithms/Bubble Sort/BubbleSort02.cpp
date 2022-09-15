// bubble sort algo : revision
#include <iostream>

using namespace std;

bool compare(int a, int b){
    return a > b;
}

void bubble_sort(int arr[], int n){
    for(int numOfTimes = 0; numOfTimes < n; numOfTimes++){
        for(int index = 0; index < n-numOfTimes-1; index++){
            if(compare(arr[index],arr[index+1])){
                swap(arr[index],arr[index+1]);
            }
        }
    }
}


int main(){
    int arr[] = {-2,9,-10,8,7,4,0};
    int n = 7;
    bubble_sort(arr, n);
    for(int i=0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}