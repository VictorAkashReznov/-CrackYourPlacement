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
    bool isValid(string s)
    {
        stack<char> s1;
        for (auto i : s)
        {
            if (i == '(' || i == '[' || i == '{')
            {
                s1.push(i);
            }
            else if (i == ']')
            {
                if (s1.size() > 0 && s1.top() == '[')
                {
                    s1.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (i == '}')
            {
                if (s1.size() > 0 && s1.top() == '{')
                {
                    s1.pop();
                }
                else
                {
                    return false;
                }
            }
            else if (i == ')')
            {
                if (s1.size() > 0 && s1.top() == '(')
                {
                    s1.pop();
                }
                else
                    return false;
            }
        }
        return s1.size() == 0;
    }
};
int main()
{

    return 0;
}