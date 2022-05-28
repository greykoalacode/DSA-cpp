#include<iostream>
using namespace std;

int count_bits(int n){
    int count = 0;
    while(n){
        count += (n & 1);
        n = n >> 1;
    }
    return count;
}

int count_bits_hack(int n){
    int ans = 0;
    while(n){
        // removes the last set bit from current number
        n = n & (n-1);
        ans++;
    }
    return ans;
}
int main(){
    cout<<count_bits(9)<<endl;
    return 0;
}