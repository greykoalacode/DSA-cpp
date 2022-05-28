#include <iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }
    // recursive case
    int ans = n*factorial(n-1);
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}