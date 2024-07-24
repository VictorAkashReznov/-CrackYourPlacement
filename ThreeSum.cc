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
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int n = nums.size();
        set<vector<int>> s1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int s = i + 1, e = n - 1;
            int p = -nums[i];
            while (s < e)
            {
                int sum = nums[s] + nums[e];
                if (sum == p)
                {
                    s1.insert({nums[i], nums[s], nums[e]});
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
        vector<vector<int>> ans;
        for (auto it : s1)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
int main()
{

    return 0;
}