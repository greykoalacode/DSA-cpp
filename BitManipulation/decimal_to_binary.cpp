#include<iostream>
using namespace std;

long long int convertToBinary(int n){
    long long int ans = 0;
    long long int power = 1;
    while(n){
        int lastBit = n & 1;
        ans += lastBit*power;
        power *= 10;
        n = n >>1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<convertToBinary(n)<<endl;
    return 0;
}