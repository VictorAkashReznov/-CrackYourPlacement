#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
class Solution
{
    int answer = 0;
    int helper(vector<int> &nums, int s, int e, int key)
    {
        int ans = e + 1;
        int end = e;
        while (s <= e)
        {
            int mid = (s + e) / 2;
            if (nums[mid] * 1ll > 2 * 1ll * key)
            {
                ans = mid;
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return end - ans + 1;
    }
    void merge(vector<int> &nums, int s, int e)
    {
        int mid = (s + e) / 2;
        int leftS = s, leftE = mid, rightS = mid + 1, rightE = e;
        for (int i = rightS; i <= rightE; i++)
        {
            int a = helper(nums, leftS, leftE, nums[i]);
            if (a == 0)
            {
                break;
            }
            else
            {
                answer += a;
            }
        }

        vector<int> v1;
        while (leftS <= leftE && rightS <= rightE)
        {
            if (nums[leftS] > nums[rightS])
            {
                v1.push_back(nums[rightS++]);
            }
            else
            {
                v1.push_back(nums[leftS++]);
            }
        }
        while (leftS <= leftE)
        {
            v1.push_back(nums[leftS++]);
        }
        while (rightS <= rightE)
        {
            v1.push_back(nums[rightS++]);
        }

        for (int j = 0, i = s; i <= e; j++, i++)
        {
            nums[i] = v1[j];
        }
    }
    void mergesort(vector<int> &nums, int s, int e)
    {
        if (s == e)
        {
            return;
        }
        int mid = (s + e) / 2;
        mergesort(nums, s, mid);
        mergesort(nums, mid + 1, e);
        merge(nums, s, e);
    }

public:
    int reversePairs(vector<int> &nums)
    {
        mergesort(nums, 0, nums.size() - 1);
        return answer;
    }
};
int main()
{
    vector<int> temp = {1, 3, 2, 3, 1};
    Solution s1;
    cout << s1.reversePairs(temp);
    // cout << (INT_MAX > 625284395) << endl;
    // cout << (INT_MAX) << endl;
    // cout << 625284395 << endl;
    return 0;
}