class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        //code here.
        set<int> s1;
        for (int i = 0; i < n1; i++)
        {
            s1.insert(A[i]);
        }
        set<int> s2;
        for (int j = 0; j < n2; j++)
        {
            if (s1.find(B[j]) != s1.end())
            {
                s2.insert(B[j]);
            }
        }
        set<int> s3;
        for (int j = 0; j < n3; j++)
        {
            if (s2.find(C[j]) != s2.end())
            {
                s3.insert(C[j]);
            }
        }

        vector<int> ans;
        for (auto it : s3)
            ans.push_back(it);

        return ans;
    }
};