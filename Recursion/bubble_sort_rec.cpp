#include <iostream>
using namespace std;

bool compare(int a, int b){
    return a > b;
}

void bubble_sort_rec(int a[], int n){
    // base case
    if(n==1){
        return;
    }
    // rec case
    for(int j=0; j < n-1; j++){
        if(compare(a[j],a[j+1])){
            swap(a[j],a[j+1]);
        }
    }
    bubble_sort_rec(a,n-1);
}

void bubble_sort_rec2(int a[], int n, int j){
    // base case
    if(n==1){
        return;
    }
    // recursive case
    if(j == n-1){
        bubble_sort_rec2(a,n-1, 0);
        return;
    }
    
    if(compare(a[j],a[j+1])){
        swap(a[j],a[j+1]);
    }
    bubble_sort_rec2(a,n,j+1);
}

int main(){
    int a[] = {5,2,4,1,3};
    int n = 5;
    bubble_sort_rec2(a,n,0);
    for(int i=0; i< n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}