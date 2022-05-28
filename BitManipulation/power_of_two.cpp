#include<iostream>
using namespace std;

void checkPowerOfTwo(int n){
    if(n & n-1){
        cout<<"Not a Power of Two"<<endl;
    } else {
        cout<<"Power of Two"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    checkPowerOfTwo(n);
    return 0;
}