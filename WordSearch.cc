#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
class Solution
{
    int m, n;
    vector<vector<char>> board;
    string word;
    bool helper(vector<vector<char>> &board, int i, int j, int k)
    {
        if (k == word.length())
            return true;
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] == '@' || word[k] != board[i][j])
            return false;
        char c = board[i][j];
        board[i][j] = '@';
        vector<int> X = {0, 1, 0, -1};
        vector<int> Y = {1, 0, -1, 0};
        for (int t1 = 0; t1 < 4; t1++)
        {
            bool b1 = helper(board, i + X[t1], j + Y[t1], k + 1);
            if (b1 == true)
            {
                return true;
            }
        }
        board[i][j] = c;
        return false;
    }

public:
    bool exist(vector<vector<char>> &board, string word)
    {

        vector<int> v1(200, 0);
        vector<int> v2(200, 0);

        this->m = board.size();
        this->n = board[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                v1[board[i][j]]++;
            }
        }
        for (int i = 0; i < word.length(); i++)
        {
            v2[word[i]]++;
        }
        for (int i = 0; i < v1.size(); i++)
        {
            if (v1[i] < v2[i])
            {
                return false;
            }
        }

        // this->board = board;
        this->word = word;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (word[0] == board[i][j])
                {
                    bool b1 = helper(board, i, j, 0);
                    if (b1 == true)
                    {
                        return b1;
                    }
                }
            }
        }

        return false;
    }
};

int main()
{

    return 0;
}