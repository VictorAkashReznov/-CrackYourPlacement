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
    int minMoves2(vector<int> &nums)
    {
        int n = nums.size();
        vector<long long> v1;
        v1.push_back(0);
        long long sum = 0;

        sort(nums.begin(), nums.end());
        for (int i : nums)
        {
            sum += i;
            v1.push_back(sum);
        }

        v1.push_back(0);
        long long ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            long long l1 = abs(nums[i] * 1ll * (i) * 1ll - v1[i]) + abs(((n - 1 - i) * 1ll * nums[i]) * 1ll - (sum - v1[i + 1]));
            ans = min(ans, l1);
        }
        return (int)ans;
    }
};
int main()
{

    return 0;
}