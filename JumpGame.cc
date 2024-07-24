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
    bool canJump(vector<int> &nums)
    {
        bool b1 = true;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                b1 = false;
            }
        }
        if (b1 == 1 || nums.size() == 1)
        {
            return true;
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            ans = max(i + nums[i], ans);
            if (ans == nums.size() - 1)
            {
                return true;
            }
            if (ans == i)
            {
                return false;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}