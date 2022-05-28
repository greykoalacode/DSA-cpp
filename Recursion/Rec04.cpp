#include <iostream>
using namespace std;

void printDecreasing(int N){
    if(N == 0){
        return ;
    }
    cout<<N<<" ";
    printDecreasing(N-1);
}

void printIncreasing(int N){
    if(N==0){
        return ;
    }
    printIncreasing(N-1);
    cout<<N<<" ";
}

int main(){
    int N;
    cin>>N;
    printDecreasing(N);
    printIncreasing(N);
    return 0;
}