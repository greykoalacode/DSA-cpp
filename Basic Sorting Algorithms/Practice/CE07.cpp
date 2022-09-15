#include<bits/stdc++.h>
using namespace std;


// tried selection sort
vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    for(int i=0; i < a.size()-1; i++){
        int min_index = i;
        for(int j=i+1; j<a.size(); j++){
            if(flag){
                if(a[min_index] > a[j])
                    min_index = j;
            } else {
                if(a[min_index] < a[j])
                    min_index = j;
            }
        }
        swap(a[min_index],a[i]);
    }
    return a;
}