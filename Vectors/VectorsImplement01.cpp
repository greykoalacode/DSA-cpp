#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector<int> v(5);

    Vector<char> vs;
    vs.push_back('a');
    vs.push_back('b');
    for (int i = 0; i < vs.size(); i++)
    {
        cout << vs[i] << " ";
    }

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();

    cout << v.front() << " " << v.back() << " " << v.at(2) << endl;
    cout << v.size() << endl
         << v.capacity() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}