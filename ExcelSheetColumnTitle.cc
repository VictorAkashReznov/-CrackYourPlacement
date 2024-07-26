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
    string convertToTitle(int columnNumber)
    {
        string s1 = "";
        // if(columnNumber==0)
        // {
        //     return "A";
        // }
        while (columnNumber)
        {
            columnNumber--;
            int a = columnNumber % 26;
            columnNumber /= 26;
            s1.push_back(char('A' + a));
        }
        reverse(s1.begin(), s1.end());
        return s1;
    }
};
int main()
{

    return 0;
}