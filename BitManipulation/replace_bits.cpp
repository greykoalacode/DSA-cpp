#include <iostream>
using namespace std;

// Replace Bits in N by M
// You are given two 32-bit numbers, N, M and two bit positions i and j.
// Write a method to set all bits between i and j equal to M.
// M (becomes a substring of N locationed at and starting at j)

// Example:
// N = 10000000000;
// M = 10101;
// i =2, j=6
// Output: 1001010100

// Solution: clear i-j bits at N, then left shift M by i bits 
// and OR the mask with num

void clearBitsInRange(int &n, int i, int j){
    int a = (~0)<<(j+1);
    int b = (1 <<i) -1;
    int mask =  a|b;
    n = n&mask;
}

void replaceBits(int &N, int M, int i, int j){
    clearBitsInRange(N, i, j);
    int mask = M << i;
    N = N | mask;
}

int main(){
    int n = 15;
    int i = 1;
    int j = 3;
    int m = 2;

    replaceBits(n,m, i,j);
    cout<<n<<endl;
    return 0;
}