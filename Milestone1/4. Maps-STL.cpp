#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int x;
        cin >> x;
        string str;
        int y;
        if (x == 1)
        {
            cin >> str >> y;
            mp[str] += y;
        }
        if (x == 2)
        {
            cin >> str;
            mp.erase(str);
        }
        if (x == 3)
        {
            cin >> str;
            cout << mp[str] << endl;
        }
    }
    return 0;
}
