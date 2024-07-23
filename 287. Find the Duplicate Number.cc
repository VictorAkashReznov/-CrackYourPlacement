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
    int findDuplicate(vector<int> &nums)
    {

        while (nums[0] != 0)
        {
            if (nums[0] == nums[nums[0]])
            {
                return nums[0];
            }
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
};
int main()
{

    return 0;
}