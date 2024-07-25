#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
void helper(string &s1)
{
    sort(s1.begin(), s1.end());
    char prev = ' ';
    int t = 0;
    for (char i : s1)
    {
        if (i == prev)
        {
            t++;
        }
        else
        {
            if (t > 1)
            {
                cout << prev << " " << t << endl;
            }
            t = 1;
            prev = i;
        }
    }
    if (t > 1)
    {
        cout << prev << " " << t << endl;
    }
}
int main()
{
    string s1 = "geeksforgeeks";
    helper(s1);

    return 0;
}