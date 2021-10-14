class Solution
{
public:
    vector<int> common_digits(vector<int> nums)
    {
        // Code here
        set<int> s;

        for (int i = 0; i < nums.size(); i++)
        {
            int n = nums[i];
            while (n > 0)
            {
                s.insert(n % 10);
                n = n / 10;
            }
        }

        vector<int> ans;
        for (auto it : s)
            ans.push_back(it);

        return ans;
    }
};