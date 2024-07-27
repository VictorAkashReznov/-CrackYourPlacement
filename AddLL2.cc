#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
    void reverseLL(ListNode *&head)
    {
        ListNode *prev = NULL;
        ListNode *curr = head;
        while (curr)
        {
            ListNode *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        head = prev;
    }

    pair<ListNode *, int> helper(ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL && l2 == NULL)
        {
            return {NULL, 0};
        }
        pair<ListNode *, int> p1 = helper(l1->next, l2->next);
        int k = p1.second + l1->val + l2->val;
        ListNode *n1 = new ListNode(k % 10);
        n1->next = p1.first;
        return {n1, k / 10};
    }

public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        // reverseLL(l1);
        // reverseLL(l2);
        ListNode *n1 = l1;
        ListNode *n2 = l2;
        int count1 = 0, count2 = 0;
        while (n1)
        {
            n1 = n1->next;
            count1++;
        }
        while (n2)
        {
            n2 = n2->next;
            count2++;
        }
        int t = abs(count1 - count2);
        if (count1 > count2)
        {
            while (t--)
            {
                ListNode *n3 = new ListNode(0);
                n3->next = l2;
                l2 = n3;
            }
        }
        else
        {
            while (t--)
            {
                ListNode *n3 = new ListNode(0);
                n3->next = l1;
                l1 = n3;
            }
        }
        pair<ListNode *, int> p1 = helper(l1, l2);

        if (p1.second != 0)
        {
            ListNode *n1 = new ListNode(p1.second);
            n1->next = p1.first;
            p1.first = n1;
        }
        return p1.first;
    }
};
int main()
{

    return 0;
}