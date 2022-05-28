#include <iostream>
using namespace std;

int pow(int x, int y, int mod){
    int ans = 1;
    int pow = x;
    while(y){
        if(y&1){
            ans = (ans * pow)% mod;
        }
        pow = (pow * pow)%mod;
        y = y >> 1;
    }
    return ans;
}

int main(){
    int x = 12, y=25, mod=10007;
    cout<<pow(x,y, mod)<<endl;
    return 0;
}