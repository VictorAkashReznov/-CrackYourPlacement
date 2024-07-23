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
        // vector<int>v1;
        // for(int i=1; i<prices.size(); i++)
        // {
        //     v1.push_back(prices[i]-prices[i-1]);
        // }

        // int sum=0;
        // int ans=0;
        // for(int i=0 ; i<v1.size(); i++)
        // {
        //     sum+=v1[i];
        //     if(sum<=0)
        //     {
        //         sum=0;
        //     }
        //     ans=max(ans,sum);
        // }
        // return ans;
        int ans = 0, s = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            ans = max(ans, prices[i] - s);
            s = min(s, prices[i]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}