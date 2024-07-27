#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
void RobinKrampAlgo(string &str, string &pattern)
{
    int p = 5003;
    int d = 1, hash1 = 0, hash2 = 0;
    for (int i = pattern.length() - 1; i >= 0; i--)
    {
        hash1 = (hash1 + (d * (pattern[i] - 'A' + 1)) % p) % p;
        hash2 = (hash2 + (d * (str[i] - 'A' + 1)) % p) % p;
        d = (d * 26) % p;
    }
    d = 1;
    for (int i = 0; i < pattern.length() - 1; i++)
    {
        d = (d * 26) % p;
    }

    for (int i = pattern.length(), j = 0; i < str.length(); j++, i++)
    {
        if (hash1 == hash2)
        {
            bool b1 = true;
            for (int i1 = j, j1 = 0; i1 < i; i1++, j1++)
            {
                if (pattern[j1] != str[i1])
                {
                    b1 = false;
                    break;
                }
            }
            if (b1 == true)
            {
                cout << j << endl;
            }
        }
        hash2 = (hash2 - (d * (str[j] - 'A' + 1)) % p + p) % p;
        hash2 = (hash2 * 26) % p;
        hash2 = (hash2 + (str[i] - 'A' + 1)) % p;
    }
    if (hash1 == hash2)
    {
        bool b1 = true;
        for (int i1 = str.length() - pattern.length(), j1 = 0; i1 < str.length(); i1++, j1++)
        {
            if (pattern[j1] != str[i1])
            {
                b1 = false;
                break;
            }
        }
        if (b1 == true)
        {
            cout << str.length() - pattern.length() << endl;
        }
    }
}
int main()
{
    string str = "AABAACAADAABAABA";
    string pattern = "AABA";
    RobinKrampAlgo(str, pattern);

    return 0;
}
