#include <iostream>
#include <vector>
#include <bitset>

#define MAXVAL 10000

using namespace std;

vector<bool> subsetSum(vector<int> num, vector<int> query){
    int N = query.size();
    bitset<MAXVAL> bit;
    bit.reset();
    bit[0] = 1;
    vector<bool> res;
    for(int i=0; i<num.size(); i++){
        bit |= (bit << num[i]);
    }
    for(int j=0; j<N; j++){
        if(bit[query[j]]){
            res.push_back(true);
        }else {
            res.push_back(false);
        }
    }
    return res;
}

int main(){
    vector<int> arr= {1,2,3};
    vector<int> query={5,3,8};

    vector<bool> res = subsetSum(arr, query);

    for(bool b: res){
        cout<<b<<", ";
    }
    cout<<endl;
    


    return 0;
}

