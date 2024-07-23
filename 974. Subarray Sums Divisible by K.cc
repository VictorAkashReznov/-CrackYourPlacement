#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
int subarraySumDivisiblebyK(vector<int> &arr, int k)
{
    vector<int> rem(k, 0);
    rem[0] = 1;
    int ans = 0, sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        int p = sum % k;
        if (p < 0)
            p += k;
        ans += rem[p];
        rem[p]++;
    }
    return ans;
}
int main()
{

    return 0;
}