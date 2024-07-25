#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
// class Solution
// {
//     vector<vector<int>> ans;
//     void helper(vector<int> &temp, int i)
//     {
//         if (i + 1 == temp.size())
//         {
//             ans.push_back(temp);
//             return;
//         }
//         unordered_set<int> s1;
//         for (int j = i; j < temp.size(); j++)
//         {
//             if (s1.find(temp[j]) == s1.end())
//             {
//                 if (i == 0)
//                 {
//                     cout << s1.size() << " ";
//                     cout << temp[j] << " \n";
//                 }
//                 s1.insert(temp[j]);
//                 swap(temp[i], temp[j]);
//                 helper(temp, i + 1);
//                 swap(temp[i], temp[j]);
//             }
//         }
//         return;
//     }

// public:
//     vector<vector<int>> permuteUnique(vector<int> &nums)
//     {
//         sort(nums.begin(), nums.end());
//         helper(nums, 0);
//         return ans;
//     }
// };

class Solution
{
    set<vector<int>> myset;
    void helper(vector<int> &temp, int i)
    {
        if (i + 1 == temp.size())
        {
            myset.insert(temp);
            return;
        }
        for (int j = i; j < temp.size(); j++)
        {
            swap(temp[i], temp[j]);
            helper(temp, i + 1);
            swap(temp[i], temp[j]);
        }
    }

public:
    vector<vector<int>> uniquePerms(vector<int> &arr, int n)
    {
        // code here
        sort(arr.begin(), arr.end());
        helper(arr, 0);
        vector<vector<int>> ans;
        for (auto it : myset)
        {
            ans.push_back(it);
        }
        return ans;
    }
};
int main()
{
    vector<int> temp = {1, 2, 1};
    int n = 9;
    Solution s1;
    vector<vector<int>> t1 = s1.permuteUnique(temp);

    for (int i = 0; i < t1.size(); i++)
    {
        for (int j : t1[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}