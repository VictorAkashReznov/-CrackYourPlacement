#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
class Solution
{
    bool helper(string &s1, int s, int e)
    {
        while (s < e)
        {
            if (s1[s] != s1[e])
            {
                return false;
            }
            s++, e--;
        }
        return true;
    }

public:
    bool validPalindrome(string s1)
    {
        int s = 0, e = s1.length() - 1;
        while (s < e)
        {
            if (s1[s] != s1[e])
            {
                bool b1 = helper(s1, s + 1, e);
                bool b2 = helper(s1, s, e - 1);
                return b1 || b2;
            }
            else
            {
                s++, e--;
            }
        }
        return true;
    }
};
int main()
{

    return 0;
}