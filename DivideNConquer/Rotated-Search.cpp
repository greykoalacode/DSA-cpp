#include <iostream>
#include <vector>

using namespace std;


int rotateArraySearch(vector<int> a, int k){
    int n = a.size();
    // logic
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(a[mid] == k){
            return mid;
        }
        // Line L1 case
        if(a[mid] >= a[s]){
            if(a[s] <= k && k <= a[mid]){
                e = mid-1;
            } else {
                s = mid+1;
            }
        }
        // Line L2 case
        if(a[mid] <= a[e]){
            if(a[mid] <= k && k <= a[e]){
                s = mid+1;
            } else {
                e =  mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector<int> a {4,5,6,7,0,1,2,3};
    int k = 6;
    cout<<rotateArraySearch(a,k)<<endl;
    return 0;
}