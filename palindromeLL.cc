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
    ListNode *reverseList(ListNode *head)
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
        return prev;
    }

public:
    bool isPalindrome(ListNode *head)
    {
        if (head->next == NULL)
        {
            return true;
        }
        ListNode *fast = head->next;
        ListNode *slow = head;

        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *n1 = NULL;
        n1 = slow->next;
        slow->next = NULL;
        // if(fast==NULL)
        // {
        //     n1=slow->next->next;
        //     slow->next=NULL;
        // }
        // else if(fast->next==NULL)
        // {
        // }
        ListNode *tail = reverseList(n1);

        while (tail && head)
        {
            cout << head->val << " " << tail->val << endl;
            if (head->val != tail->val)
            {
                return false;
            }
            head = head->next;
            tail = tail->next;
        }
        return true;
    }
};
int main()
{

    return 0;
}