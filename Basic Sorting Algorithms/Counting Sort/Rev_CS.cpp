#include <iostream>

using namespace std;

void counting_sort(int a[], int n){
    int largest = INT_MIN;
    for(int i=0; i < n; i++){
        largest = max(largest,a[i]);
    }   
    // dynamic arr
    int *freq = new int[largest+1]{0};

    for(int j = 0; j < n; j++){
        freq[a[j]]++;
    }

    int j = 0;
    for(int k = 0; k <= largest; k++){
        while(freq[k] > 0){
            a[j] = k;
            freq[k]--;
            j++;
        }
    }

}

int main(){
    int arr[] = {8,7,8,2,3,1,10,28};
    int n = 8;
    counting_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}