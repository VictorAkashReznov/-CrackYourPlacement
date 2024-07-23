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
    int maxProfit(vector<int> &prices)
    {
        vector<int> temp;
        int n = prices.size();
        for (int i = 1; i < n; i++)
        {
            temp.push_back(prices[i] - prices[i - 1]);
        }
        int ans = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            if (temp[i] > 0)
            {
                ans += temp[i];
            }
        }
        return ans;
    }
};
int main()
{

    return 0;
}