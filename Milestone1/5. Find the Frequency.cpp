int findFrequency(vector<int> v, int x)
{
    // Your code here
    unordered_map<int, int> mp;

    for (int i = 0; i < v.size(); i++)
        mp[v[i]]++;

    return mp[x];
}