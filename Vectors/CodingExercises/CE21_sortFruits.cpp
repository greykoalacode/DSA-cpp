#include <iostream>
#include <vector>
using namespace std;

bool compareFruits(pair<string, int> fruit1, pair<string, int> fruit2, string S)
{
    if (S == "name")
    {
        return fruit1.first < fruit2.first;
    }
    else if (S == "price")
    {
        return fruit1.second < fruit2.second;
    }
    return false;
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    for (int pos = 0; pos <= v.size() - 2; pos++)
    {
        int min_position = pos;
        for (int j = pos; j < v.size(); j++)
        {
            if (compareFruits(v[j], v[min_position], S))
            {
                min_position = j;
            }
        }
        swap(v[pos], v[min_position]);
    }
    return v;
}

int main()
{
    vector<pair<string, int>> fruits = {{"Mango", 100}, {"Guava", 70}, {"Grapes", 40}, {"Apple", 60}, {"Banana", 30}};
    string S = "price";
    vector<pair<string, int>> res = sortFruits(fruits, S);
    for (pair<string, int> fruit : res)
    {
        cout << fruit.first << " " << fruit.second << endl;
    }
    return 0;
}