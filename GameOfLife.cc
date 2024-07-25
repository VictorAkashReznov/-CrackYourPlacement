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
    void gameOfLife(vector<vector<int>> &board)
    {
        // 2 now desd but inpast it was live.
        // 3 now live but in past it was dead.
        int m = board.size(), n = board[0].size();
        vector<int> X = {-1, 0, 1, -1, 1, -1, 0, 1};
        vector<int> Y = {-1, -1, -1, 0, 0, 1, 1, 1};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 1)
                {
                    int countLive = 0;
                    for (int k = 0; k < 8; k++)
                    {
                        int x = i + X[k], y = j + Y[k];
                        if (x >= 0 && x < m && y >= 0 && y < n)
                        {
                            if (board[x][y] == 1)
                            {
                                countLive++;
                            }
                            else if (board[x][y] == 2)
                            {
                                countLive++;
                            }
                        }
                    }
                    if (countLive < 2 || countLive > 3)
                    {
                        board[i][j] = 2;
                    }
                }
                else
                {
                    int countLive = 0;
                    for (int k = 0; k < 8; k++)
                    {
                        int x = i + X[k], y = j + Y[k];
                        if (x >= 0 && x < m && y >= 0 && y < n)
                        {
                            if (board[x][y] == 1)
                            {
                                countLive++;
                            }
                            else if (board[x][y] == 2)
                            {
                                countLive++;
                            }
                        }
                    }

                    if (countLive == 3)
                    {
                        board[i][j] = 3;
                    }
                }
            }
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 2)
                {
                    board[i][j] = 0;
                }
                else if (board[i][j] == 3)
                {
                    board[i][j] = 1;
                }
            }
        }
    }
};
int main()
{

    return 0;
}