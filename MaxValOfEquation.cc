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
    int findMaxValueOfEquation(vector<vector<int>> &points, int k)
    {
        set<pair<int, int>, greater<pair<int, int>>> s1;
        set<pair<int, int>, greater<pair<int, int>>> s2;
        int s = 1;
        int n = points.size();
        int ans = 0;
        for (int i = 0; i < points.size(); i++)
        {
            int a = points[i][0] + points[i][1];
            int b = points[i][1] - points[i][0];

            while (s < n && points[s][0] - points[i][0] <= k)
            {
                int a1 = points[s][0] + points[s][1];
                int b1 = points[s][1] - points[s][0];
                s1.insert({a1, s});
                s2.insert({b1, s});
                s++;
            }
            s1.erase({a, i});
            s2.erase({b, i});

            auto it1 = s1.begin();
            auto it2 = s2.begin();
            int c = 0, d = 0;
            if (it1 == s1.end() && it2 == s2.end())
            {
                continue;
            }
            if (it1 != s1.end() && it2 == s2.end())
            {
                c = it1->first;
                ans = max(ans, b + c);
            }
            else if (it1 == s1.end() && it2 != s2.end())
            {
                d = it2->first;
                ans = max(ans, a + d);
            }
            else
            {
                c = it1->first;
                d = it2->first;
                ans = max(ans, max(a + d, b + c));
            }
        }
        return ans;
    }
};
int main()
{
    // set<int> s1 = {123, 1234};
    // s1.erase(12345);
    // cout << " hello " << endl;
    vector<vector<int>> points = {{1, 3}, {2, 0}, {5, 10}, {6, -10}};
    int k = 2;
    Solution s1;
    cout << s1.findMaxValueOfEquation(points, k);
    return 0;
}