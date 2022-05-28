#include <iostream>
#include <vector>

using namespace std;

// Vector STL Approach
vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    int N =  arr.size();
    vector<int> colZero;
    for(int i=0; i< N; i++){
        for(int j=0; j< N; j++){
            if(arr[i][j] == 0){
                fill(arr[i].begin(),arr[i].end(), 0);
                colZero.push_back(j);
                break;
            }
        }
    }

    for(int k=0; k < N; k++){
        for(int l: colZero){
            arr[k][l] =0;
        }
    }
    return arr;
}

// general approach
vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    int rows
}

int main(){
    vector<vector<int>> arr = {{5,4,3,9},{2,0,7,6},{1,3,4,0},{9,8,3,4}};
    vector<vector<int>> res =  makeZeroes(arr);
    for(vector<int> eachRow: arr){
        for(int elem: eachRow){
            cout<<elem<<" ";
        }
        cout<<endl;
    }
    for(vector<int> eachRow: res){
        for(int elem: eachRow){
            cout<<elem<<" ";
        }
        cout<<endl;
    }
}