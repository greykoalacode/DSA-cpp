#include <iostream>
#include <vector>
using namespace std;

int xoring(vector<int> v){
    int ans = 0;
    for(int i=0; i<v.size(); i++){
        ans = ans ^ v[i];
    }
    return ans;
}

int main(){

    vector<int> v = {1,2,3,1,4,5,4,2,3};
    cout<<xoring(v)<<endl;
    return 0;
}