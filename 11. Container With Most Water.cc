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
    int maxArea(vector<int> &height)
    {
        int s = 0, e = height.size() - 1, area = 0;
        while (s < e)
        {
            area = max(area, min(height[s], height[e]) * (e - s));
            if (height[s] >= height[e])
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        return area;
    }
};
int main()
{

    return 0;
}