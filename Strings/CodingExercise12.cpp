#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// cout << i << " " << j << " " << consecutiveCount << " " << current << endl;
// for (char ch : chars)
// {
//     cout << ch << " ";
// }
// cout << endl;

// PREVIOUS APPROACH
//     int consecutiveCount = 0;
//     int i = 0;
//     int j = 0;
//     char current = '1';
//     string res = "";
//     int N = chars.size();
//     while (i < chars.size())
//     {
//         //
//         if (chars[j] != current)
//         {
//             if (consecutiveCount > 1)
//             {
//                 string num = to_string(consecutiveCount);
//                 // vector<char>::iterator newEnd;
//                 // newEnd = remove(chars.begin() + i + 1, chars.begin() + j, current);
//                 // chars.erase(newEnd, chars.begin() + j);
//                 chars.erase(chars.begin() + i + 1, chars.begin() + j);

//                 for (char ch : num)
//                 {
//                     chars.insert(chars.begin() + ++i, ch);
//                 }
//                 i = j;
//                 consecutiveCount = 0;
//             }
//             else if (consecutiveCount == 1)
//                 consecutiveCount = 0;
//             else
//             {
//                 current = chars[j];
//                 // res += chars[j];
//                 consecutiveCount++;
//             }

//             j = i + 1;
//         }
//         while (chars[j] == current)
//         {
//             consecutiveCount++;
//             // chars.erase(chars.begin() + j);
//             j++;
//         }
//     }

//     return chars.size();

// BETTER LOGIC

vector<char> compress2(vector<char> &chars)
{
    vector<char> res;
    int i = 0;
    while (i < chars.size() - 1)
    {
        int count = 1;
        while (i < chars.size() - 1 && chars[i + 1] == chars[i])
        {
            count++;
            i++;
        }
        res.push_back(chars[i]);
        string num = to_string(count);
        for (int k = 0; k < num.length(); k++)
        {
            res.push_back(num[k]);
        }
        i++;
    }
    return res.size() > chars.size() ? chars : res;
}

// MY OLD LOGIC
int compress(vector<char> &chars)
{
    vector<char> res;
    int consec = 0;
    int track = 0;
    char current = '1';
    int i = 0;
    while (i < chars.size() - 1)
    {

        if (chars[i] != current)
        {
            if (consec > 1)
            {
                string count = to_string(consec);
                for (int k = 0; k < count.length(); k++)
                {
                    res.push_back(count[k]);
                }
                consec = 0;
            }
            if (!consec)
            {
                res.push_back(chars[i]);
                track = i;
                consec++;
            }
            else
            {
                consec = 1;
                res.push_back(chars[i]);
            }
            current = chars[i];
            i++;
        }
        while (chars[i] == current)
        {
            consec++;
            i++;
        }
        // cout << "I val: " << i << " Consec " << consec << " current : " << current << endl;
    }
    if (consec > 1)
    {
        string count = to_string(consec);
        for (int k = 0; k < count.length(); k++)
        {
            res.push_back(count[k]);
        }
    }
    chars.clear();
    for (char ch : res)
    {
        chars.push_back(ch);
    }

    return res.size();
}
int main()
{
    vector<char> chars = {'a', 'a', 'a', 'b', 'b', 'a', 'a'};
    cout << compress(chars) << endl;

    vector<char> res = compress2(chars);
    for (char ch : res)
    {
        cout << ch << " ";
    }
    cout << endl;
    for (int i = 0; i < chars.size(); i++)
    {
        cout << chars[i] << " ";
    }
    return 0;
}