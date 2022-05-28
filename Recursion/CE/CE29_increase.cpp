#include <iostream>
#include <vector>
using namespace std;

vector<int> increasingNumbers(int N){
    // base case
    if(N==0){
        return {};
    }
    // recursive case
    vector<int> numbers = increasingNumbers(N-1);
    numbers.push_back(N);
    return numbers;
}

int main(){
    int N;
    cin>>N;
    vector<int> res = increasingNumbers(N);

    for(int r: res){
        cout<<r<<" ";
    }
    cout<<endl;
    return 0;
}