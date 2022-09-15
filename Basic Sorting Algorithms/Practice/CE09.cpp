#include <iostream>
#include <vector>

using namespace std;

int pairSticks(vector<int> length, int D)
{
    int pairCount = 0;
    for(int i=0; i< length.size()-1; i++){
        int current = length[i];
        int min_pos = i;
        for(int j=i+1; j < length.size(); j++){
            if(abs(current-length[j]) <= D){
                min_pos = j;
                pairCount++;
                break;
            }
        }
        swap(length[min_pos],length[i]);
    }
    return pairCount;
}

int main(){
    vector<int> arr = {1,3,3,9,4};
    int x = 2;
    cout<<pairSticks(arr,x)<<endl;
    return 0;
}