#include <iostream>
#include <vector>
using namespace std;

vector<int> findAllOccurences(int k, vector<int> v){
    // base case
    if(v.size() == 0){
        return {};
    }
    // recursive case
    int N = v.size();
    if(v[N-1] == k){
        v.pop_back();
        vector<int> occur= findAllOccurences(k, v);
        occur.insert(occur.end(), N-1);
        return occur;
    }
    else {
        v.pop_back();
        vector<int> occur= findAllOccurences(k, v);
        return occur;
    }
}

int main(){

    vector<int> v = {1,2,5,3,1,2,3,8,6,3,6,7,9};
    int k = 3;
    vector<int> res=  findAllOccurences(k,v);
    for(int each: res){
        cout<<each<<" ";
    }
    cout<<endl;
    return 0;
}