#include <iostream>
using namespace std;

// Fast Exponentiation
long long int exponent(int a, int n){
    long long int ans = 1;
    long long int power = a;
    while(n){
        if(n&1){
            ans *= power;
        }
        power *= power;
        n = n >> 1;
    }
    return ans;
}

int main(){
    int a = 2, n= 4;
    cout<<exponent(a,n)<<endl;
    return 0;
}