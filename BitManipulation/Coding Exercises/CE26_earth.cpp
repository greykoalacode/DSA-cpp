#include <iostream>
using namespace std;

int earthLevel(int k){
    int cnt = 0;
    while(k){
        cnt++;
        k = k & (k-1);
    }
    return cnt;
}


int main(){
    int k;
    cin>>k;
    cout<<earthLevel(k)<<endl;
    return 0;
}