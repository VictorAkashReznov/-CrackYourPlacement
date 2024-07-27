#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>

//   Definition for singly-linked list.
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *n1 = NULL;
        ListNode *ans = NULL;
        int carry = 0;
        while (l1 && l2)
        {
            int t = l1->val + l2->val + carry;
            ListNode *n2 = new ListNode(t % 10);
            carry = t / 10;
            if (n1 == NULL)
            {
                n1 = n2;
                ans = n2;
            }
            else
            {
                n1->next = n2;
                n1 = n2;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1)
        {
            int t = l1->val + carry;
            ListNode *n2 = new ListNode(t % 10);
            carry = t / 10;
            if (n1 == NULL)
            {
                n1 = n2;
                ans = n2;
            }
            else
            {
                n1->next = n2;
                n1 = n2;
            }
            l1 = l1->next;
        }
        while (l2)
        {
            int t = l2->val + carry;
            ListNode *n2 = new ListNode(t % 10);
            carry = t / 10;
            if (n1 == NULL)
            {
                n1 = n2;
                ans = n2;
            }
            else
            {
                n1->next = n2;
                n1 = n2;
            }
            l2 = l2->next;
        }

        if (carry > 0)
        {
            ListNode *n2 = new ListNode(carry % 10);
            n1->next = n2;
        }
        return ans;
    }
};
int main()
{

    return 0;
}