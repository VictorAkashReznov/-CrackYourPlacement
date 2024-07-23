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
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans;
        unordered_map<int, int> mymap;
        for (int i = 0; i < nums.size(); i++)
        {
            if (mymap.find(target - nums[i]) != mymap.end())
            {
                return {i, mymap[target - nums[i]]};
            }
            mymap[nums[i]] = i;
        }
        return {};
    }
};
int main()
{

    return 0;
}