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
    void moveZeroes(vector<int> &nums)
    {
        int count0 = 0;
        for (int i : nums)
        {
            if (i == 0)
            {
                count0++;
            }
        }
        int s = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[s++] = nums[i];
            }
        }
        int n = nums.size() - 1;
        while (count0--)
        {
            nums[n--] = 0;
        }
    }
};
int main()
{

    return 0;
}