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
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        if (n == 0)
            return;
        int p = nums1.size() - 1;
        while (m > 0 && n > 0)
        {
            if (nums1[m - 1] > nums2[n - 1])
            {
                nums1[p] = nums1[m - 1];
                m--;
                p--;
            }
            else
            {
                nums1[p] = nums2[n - 1];
                p--;
                n--;
            }
        }
        while (m == 0 && n > 0)
        {
            nums1[p] = nums2[n - 1];
            p--;
            n--;
        }
        while (n == 0 && m > 0)
        {
            nums1[p] = nums1[m - 1];
            m--;
            p--;
        }
    }
};
int main()
{

    return 0;
}