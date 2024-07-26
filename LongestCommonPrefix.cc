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
    string longestCommonPrefix(vector<string> &strs)
    {
        vector<int> hash(26, 0);
        string ans = "";
        size_t n = strs.size();
        size_t k = INT_MAX;
        for (size_t i = 0; i < n; i++)
        {
            size_t k1 = strs[i].length();
            k = min(k, k1);
        }
        for (size_t i = 0; i < k; i++)
        {

            for (size_t j = 0; j < n; j++)
            {
                hash[strs[j][i] - 'a']++;
            }
            bool b1 = true;
            for (int j = 0; j < 26; j++)
            {
                if (hash[j] % n != 0)
                {
                    b1 = false;
                    break;
                }
            }
            if (b1 == false)
            {
                break;
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};
int main()
{

    return 0;
}