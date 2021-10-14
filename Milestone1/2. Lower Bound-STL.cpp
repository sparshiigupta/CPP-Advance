#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    vector<int> arr(q);
    for (int i = 0; i < q; i++)
        cin >> arr[i];

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        int pos = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        if (arr[pos] == x)
            cout << "Yes " << pos + 1 << endl;
        else
            cout << "No " << pos + 1 << endl;
    }
    return 0;
}
