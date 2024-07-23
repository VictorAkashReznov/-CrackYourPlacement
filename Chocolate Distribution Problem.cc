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
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        // code
        long long ans = INT64_MAX;
        sort(a.begin(), a.end());
        for (int i = 0; i + m - 1 < n; i++)
        {
            ans = min(ans, a[i + m - 1] - a[i]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}