#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<string> v;

void getString(string s, int index, int n){
    // base case
    if(index == n){
        v.push_back(s);
        return;
    }
    // recursive case
    string s1 = s;

    s1.push_back('0');
    getString(s1,index+1, n);

    if(index > 0 && s[index-1] == '0'){
        s.push_back('1');
        getString(s, index+1, n);
    }
    if(index==0){
        s.push_back('1');
        getString(s,index+1, n);
    }
    return ;
}

vector<string> binaryStrings(int n){
    v.clear();
    string str;

    getString(str, 0, n);
    return v;

}

int main(){
    int N;
    cin>>N;
    vector<string> res = binaryStrings(N);
    for(string each: res){
        cout<<each<<endl;
    }
    return 0;
}