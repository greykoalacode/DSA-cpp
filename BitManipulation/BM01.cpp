#include<iostream>
using namespace std;

// Get i-th bit
int getIthBit(int n, int i){
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
}


// Set i-th bit
void setIthBit(int &n, int i){
    int mask = (1<<i);
    n = n | mask;
}

// Clear i-th bit
void clearIthBit(int &n, int i){
    int mask = ~(1<<i);
    n = n & mask;
}

// Update i-th bit with value v
void updateIthBit(int &n, int i, int v){
    clearIthBit(n, i);
    int mask = (v << i);
    n = n | mask;
}

// Clear last i bits
void clearLastIBits(int &n, int i){
    int mask = (-1 << i);
    n = n & mask;
}

// Clear Range of bits
void clearBitsInRange(int &n, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1 <<i) -1;
    int mask =  a|b;
    n = n&mask;
}

int main(){
    
    // int x;
    // cin>>x;
    // if(x&1){
    //     cout<<"Odd"<<endl;
    // } else {
    //     cout<<"Even"<<endl;
    // }

    int n = 31;
    int i = 2;
    // cin>>i;
    // cout<<getIthBit(n,i)<<endl;
    // setIthBit(n,1);
    // clearIthBit(n,2);
    // updateIthBit(n,2,1);
    // clearLastIBits(n,i);
    clearBitsInRange(n, 1,3);
    cout<<n<<endl;
    return 0;
}