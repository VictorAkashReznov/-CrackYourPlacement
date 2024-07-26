#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
class Solution
{
    bool compare(vector<int> &temp1, vector<int> &temp2)
    {
        for (int i = 0; i < 26; i++)
        {
            if (temp1[i] != temp2[i])
                return false;
        }
        return true;
    }

public:
    int strStr(string haystack, string needle)
    {
        if (haystack.length() < needle.length())
        {
            return -1;
        }
        vector<int> hash1(26, 0);
        vector<int> hash2(26, 0);
        for (auto i : needle)
        {
            hash1[i - 'a']++;
        }

        for (int i = 0; i < needle.length() - 1; i++)
        {
            hash2[haystack[i] - 'a']++;
        }

        for (int i = needle.length() - 1, j = 0; i < haystack.size(); j++, i++)
        {
            hash2[haystack[i] - 'a']++;
            if (compare(hash1, hash2))
            {
                bool b1 = true;
                for (int i1 = j, j1 = 0; i1 <= i; i1++, j1++)
                {
                    if (haystack[i1] != needle[j1])
                    {
                        b1 = false;
                        break;
                    }
                }
                if (b1 == true)
                {
                    return j;
                }
            }
            hash2[haystack[j] - 'a']--;
        }

        return -1;
    }
};
int main()
{

    return 0;
}