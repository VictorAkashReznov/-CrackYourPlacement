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
    int maxScore(vector<int> &cardPoints, int k)
    {
        vector<int> pre;
        vector<int> sif;
        pre.push_back(0);
        sif.push_back(0);
        int n = cardPoints.size();
        vector<int> &nums = cardPoints;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            pre.push_back(sum);
        }
        sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            sum += nums[i];
            sif.push_back(sum);
        }
        // reverse(sif.begin(), sif.end());
        int ans = 0;
        int s = 0, e = k;
        while (e >= 0)
        {
            ans = max(pre[s] + sif[e], ans);
            s++;
            e--;
        }
        return ans;
    }
};
int main()
{

    return 0;
}