#include <iostream>
#include <cstring>
using namespace std;

// Practice Problem:
// Find Displacement:
// Given a long route containing N,S,E,W directions,
// find the shortest path to reach location

int main()
{
    char path[1000];
    pair<int, int> displacement = {0, 0};
    cin.getline(path, 1000);
    char displacedPath[1000];
    for (int i = 0; i < strlen(path); i++)
    {
        // Use Switch Case DUDE!
        // if (path[i] == 'N')
        // {
        //     displacement.second++;
        // }
        // else if (path[i] == 'S')
        // {
        //     displacement.second--;
        // }
        // else if (path[i] == 'E')
        // {
        //     displacement.first++;
        // }
        // else if (path[i] == 'W')
        // {
        //     displacement.first--;
        // }
        // else
        // {
        //     break;
        // }
        switch (path[i])
        {
        case 'N':
            displacement.second++;
            break;
        case 'S':
            displacement.second--;
            break;
        case 'E':
            displacement.first++;
            break;
        case 'W':
            displacement.first--;
            break;
        }
    }
    int i = 0;
    if (displacement.first >= 0 && displacement.second >= 0)
    {
        while (displacement.second--)
            displacedPath[i++] = 'N';
        while (displacement.first--)
            displacedPath[i++] = 'E';
    }
    else if (displacement.first < 0 && displacement.second < 0)
    {
        while (displacement.second++)
            displacedPath[i++] = 'S';
        while (displacement.first++)
            displacedPath[i++] = 'W';
    }
    else if(displacement.first > 0 && displacement.second < 0){
        while (displacement.second++)
            displacedPath[i++] = 'S';
        while (displacement.first--)
            displacedPath[i++] = 'E';
    }
    else if(displacement.first <0 && displacement.second > 0){
        while(displacement.second--)
            displacedPath[i++] = 'N';
        while(displacement.first++)
            displacedPath[i++] = 'W';
    }
    // PREVIOUS METHOD
    // while (displacement.second--)
    // {
    //     displacedPath[i++] = 'N';
    //     // displacement.second--;
    // }
    // while (displacement.second++)
    // {
    //     displacedPath[i++] = 'S';
    //     // displacement.second++;
    // }
    // while (displacement.first--)
    // {
    //     displacedPath[i++] = 'E';
    //     // displacement.first--;
    // }
    // while (displacement.first++)
    // {
    //     displacedPath[i++] = 'W';
    //     // displacement.first++;
    // }
    displacedPath[i] = '\0';

    cout << displacedPath << endl;
    return 0;
}