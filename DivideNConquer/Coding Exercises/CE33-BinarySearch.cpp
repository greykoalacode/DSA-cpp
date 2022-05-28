#include <iostream>
#include <vector>
using namespace std;

int bsHelper(vector<int> v, int x, int s, int e){
    // base case
    if(v.size() == 0){
        return -1;
    } 
    if(v.size() == 1){
        return v[0] == x ? 0 : -1;       
    }
    // recursive case
    if(s <= e){
        int mid = (s+e)/2;
        if(x > v[mid]){
            return bsHelper(v, x, mid+1, e);
        } else if(x == v[mid]){
            return mid;
        }
        else {
            return bsHelper(v,x, s, mid);
        }

    }
    return -1;
}

int binarySearch(vector<int> v, int x){
    int s = 0;
    int e = v.size()-1;
    return bsHelper(v, x, s, e);
}

int main(){

    vector<int> v {1,2,3,4,5,6};
    int elem = 4;
    cout<<binarySearch(v, elem);
    return 0;
}