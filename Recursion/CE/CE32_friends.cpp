#include <iostream>
using namespace std;

int friendsPairing(int n){
    // base case
    if (n <= 1){
        return 1;
    }
    
    // recursive case
    return friendsPairing(n-1)+(n-1)*friendsPairing(n-2);
}

int main(){
    int N;
    cin>>N;
    cout<<friendsPairing(N)<<endl;
    return 0;


}