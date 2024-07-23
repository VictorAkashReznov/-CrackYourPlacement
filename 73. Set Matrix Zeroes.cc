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
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size(), col0 = 0, rows = 0;
        for (int i = 0; i < m; i++)
        {
            if (matrix[i][0] == 0)
            {
                col0 = 1;
                matrix[i][0] = 0;
            }
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][j] == 0)
                    matrix[i][0] = matrix[0][j] = 0;
            }
        }
        for (int i = 1; i < m; i++)
        {
            if (matrix[i][0] == 0)
            {
                for (int j = 1; j < n; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int j = 1; j < n; j++)
        {
            if (matrix[0][j] == 0)
            {
                for (int i = 1; i < m; i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 1)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};
int main()
{

    return 0;
}