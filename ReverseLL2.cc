#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *prev = NULL;
        ListNode *n1 = head;
        ListNode *temp = NULL;

        ListNode *prev1 = NULL;
        int a = 1;

        while (n1)
        {
            if (a >= left && a <= right)
            {
                ListNode *nxt = n1->next;
                n1->next = prev1;
                prev1 = n1;
                n1 = nxt;
                if (a == left)
                {
                    temp = prev1;
                }
                if (a == right)
                {
                    temp->next = n1;

                    if (prev != NULL)
                    {
                        prev->next = prev1;
                    }
                    else
                    {
                        head = prev1;
                    }

                    break;
                }
            }
            else
            {
                prev = n1;
                n1 = n1->next;
            }
            a++;
        }
        return head;
    }
};
int main()
{

    return 0;
}