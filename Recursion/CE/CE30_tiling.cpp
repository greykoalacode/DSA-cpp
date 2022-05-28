#include <iostream>
using namespace std;


int tilingProblem(int n, int m){
    // base case
    if(n < m){
        return 1;
    }
    // recursive case
    return tilingProblem(n-1,m)+tilingProblem(n-m,m);
}

int main(){
    int n=4, m=3;
    cout<<tilingProblem(n,m);
    return 0;
}