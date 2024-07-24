#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        set<vector<int>> s1;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int s = j + 1, e = n - 1;
                while (s < e)
                {
                    long long p = target * 1ll - nums[i] - nums[j];
                    long long sum = nums[s] + nums[e];

                    if (sum == p)
                    {
                        s1.insert({nums[i], nums[j], nums[s], nums[e]});
                        s++;
                    }
                    else if (sum > p)
                    {
                        e--;
                    }
                    else
                    {
                        s++;
                    }
                }
            }
        }
        for (auto it : s1)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
int main()
{
    vector<int> temp = {1, 0, -1, 0, -2, 2};
    int t = 0;
    Solution s1;
    vector<vector<int>> temp1 = s1.fourSum(temp, t);
    for (int i = 0; i < temp1.size(); i++)
    {
        cout << temp1[i][0] << " " << temp1[i][2] << " " << temp1[i][2] << " " << temp1[i][3] << endl;
    }

    return 0;
}