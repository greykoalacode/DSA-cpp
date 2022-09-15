#include <iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i< n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main(){
    int arr[] = {20,-10,2,19,-4,5};
    int n = 6;
    selection_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}