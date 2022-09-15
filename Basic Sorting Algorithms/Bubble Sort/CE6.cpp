#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> optimizedBubbleSort(vector<int> v)
{
    // your code  goes here
    int times = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] < v[i+1]){
        times++;
        }
    }
    if(times == v.size()-1){
        return v;
    }
    for(int numOfTimes = 0; numOfTimes < v.size(); numOfTimes++){
        for(int index = 0; index < v.size()-numOfTimes-1; index++){
            if(v[index] > v[index+1]){
                swap(v[index],v[index+1]);
            }
        }
    }
    return v;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> res = optimizedBubbleSort(v);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}