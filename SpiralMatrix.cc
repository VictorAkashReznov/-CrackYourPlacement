#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
class Solution
{

    vector<int> SpiralMatrix(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> ans;
        if (m == 1 || n == 1)
        {
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    ans.push_back(matrix[i][j]);
                }
            }
            return ans;
        }
        int count = m * n;
        int rs = 0;
        int cs = 0;

        while (count)
        {
            for (int i = cs; count > 0 && i < matrix[rs].size(); i++)
            {
                ans.push_back(matrix[rs][i]);
                count--;
            }
            rs++;
            if (count <= 0)
            {
                break;
            }
            for (int i = rs; count > 0 && i < matrix.size(); i++)
            {
                ans.push_back(matrix[i][matrix[i].size() - 1]);
                count--;
                matrix[i].pop_back();
            }
            if (count <= 0)
            {
                break;
            }
            for (int i = matrix[matrix.size() - 1].size() - 1; count > 0 && i >= cs; i--)
            {
                ans.push_back(matrix[matrix.size() - 1][i]);
                count--;
            }
            matrix.pop_back();
            if (count <= 0)
            {
                break;
            }

            for (int i = matrix.size() - 1; count > 0 && i >= rs; i--)
            {
                ans.push_back(matrix[i][cs]);
                count--;
            }
            cs++;
            if (count <= 0)
            {
                break;
            }
            // cout << count << " ";
        }
        return ans;
    }

    int row_min, row_max, col_min, col_max;
    void helper(vector<vector<int>> &matrix, vector<int> &ans)
    {
        bool b1 = true;
        while (b1)
        {
            // top
            for (int i = col_min; i <= col_max; i++)
            {
                ans.push_back(matrix[row_min][i]);
            }
            row_min++;
            if (row_min > row_max)
            {
                break;
            }
            // right
            for (int i = row_min; i <= row_max; i++)
            {
                ans.push_back(matrix[i][col_max]);
            }
            col_max--;
            if (col_min > col_max)
            {
                break;
            }
            // bottom
            for (int i = col_max; i >= col_min; i--)
            {
                ans.push_back(matrix[row_max][i]);
            }
            row_max--;
            if (row_min > row_max)
            {
                break;
            }
            // left
            for (int i = row_max; i >= row_min; i--)
            {
                ans.push_back(matrix[i][col_min]);
            }
            col_min++;
            if (col_min > col_max)
            {
                break;
            }
        }
    }

public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        // int m=matrix.size();
        // int n=matrix[0].size();
        // row_min=0;
        // row_max=m-1;
        // col_min=0;
        // col_max=n-1;
        // vector<int>ans;
        // if(m==1)
        // {
        //     for(int i=0; i<n; i++)
        //     {
        //         ans.push_back(matrix[0][i]);
        //     }
        //     return ans;
        // }
        // else if(n==1)
        // {
        //     for(int i=0; i<m; i++)
        //     {
        //         ans.push_back(matrix[i][0]);
        //     }
        //     return ans;
        // }
        // else{
        //     helper(matrix, ans );
        // }
        // return ans;
        return SpiralMatrix(matrix);
    }
};
int main()
{
    vector<vector<int>> temp1 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> temp = SpiralMatrix(temp1);
    cout << " hello \n";
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;

    return 0;
}