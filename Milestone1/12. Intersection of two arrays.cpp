class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        // Your code goes here
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        vector<int> ans;
        for (int j = 0; j < m; j++)
        {
            if (s.find(b[j]) != s.end())
            {
                ans.push_back(b[j]);
                s.erase(b[j]);
            }
        }

        return ans.size();
    }
};