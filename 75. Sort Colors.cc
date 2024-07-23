#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
void DNF(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    for (int i = 0; i <= e; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[s++]);
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[e--]);
            if (arr[i] == 0 || arr[i] == 2)
            {
                i--;
            }
        }
    }
}
int main()
{

    return 0;
}