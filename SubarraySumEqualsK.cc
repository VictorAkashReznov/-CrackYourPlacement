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
    int subarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mymap;
        mymap[0] = 1;
        int sum = 0;
        int ans = 0;
        for (int i : nums)
        {

            sum += i;
            if (mymap.find(sum - k) != mymap.end())
            {
                ans += mymap[sum - k];
            }
            mymap[sum]++;
        }
        return ans;
    }
};
int main()
{

    return 0;
}