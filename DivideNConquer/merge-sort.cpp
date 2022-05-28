#include<iostream>
#include<vector>
using namespace std;

// helper method
void merge(vector<int> &array, int s, int e){
    int i = s;
    int m = (s+e)/2;
    int j = m+1;

    vector<int> temp;

    while(i <= m && j <= e){
        if(array[i] < array[j]){
            temp.push_back(array[i]);
            i++;
        } else {
            temp.push_back(array[j]);
            j++;
        }
    }
    // copy remaining elements from first array
    while (i <=m )
    {
        temp.push_back(array[i++]);
    }
    
    // copy remaining elements from second array
    while (j <=e )
    {
        temp.push_back(array[j++]);
    }

    // copy back the elements from temp to original array
    int k = 0;
    for(int idx =s;  idx <= e; idx++){
        array[idx] = temp[k];
        k++;
    }
    return;

}

// sorting method
void mergesort(vector<int> &array, int s, int e){
    // base case
    if(s>=e){
        return;
    }
    // recursive case
    int mid = (s+e)/2;
    mergesort(array, s, mid);
    mergesort(array, mid+1, e);
    return merge(array, s, e);
}

int main(){

    vector<int> arr{10,5,2,0,7,6,4};
    int s = 0;
    int e = arr.size()-1;
    mergesort(arr,s,e);
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}