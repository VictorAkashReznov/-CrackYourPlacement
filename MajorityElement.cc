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
    int majorityElement(vector<int> &nums)
    {
        int candidate = nums[0];
        int freq = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            cout << candidate << endl;
            cout << freq << endl;
            cout << endl;
            if (nums[i] == candidate)
            {
                freq++;
            }
            else
            {
                freq--;
                if (freq < 0)
                {
                    candidate = nums[i];
                    freq = 1;
                }
            }
        }
        return candidate;
    }
};
int main()
{

    return 0;
}