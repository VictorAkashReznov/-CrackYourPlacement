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
    vector<int> findDuplicates(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            while (nums[i] != i + 1 && nums[nums[i] - 1] != nums[i])
            {
                // cout << " hello " << nums[i] << endl;
                swap(nums[i], nums[nums[i] - 1]);
            }
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i + 1)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
int main()
{
    // vector<int> temp = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> temp = {1, 1, 2};
    Solution s1;
    cout << " hello " << endl;
    vector<int> temp1 = s1.findDuplicates(temp);
    cout << " hello " << endl;

    for (int i = 0; i < temp1.size(); i++)
    {
        cout << temp1[i] << " ";
    }

    return 0;
}