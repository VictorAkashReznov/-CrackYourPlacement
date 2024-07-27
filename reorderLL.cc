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

public:
    void reorderList(ListNode *head)
    {
        ListNode *fast = head->next;
        ListNode *slow = head;

        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *temp = slow->next;
        reverseLL(temp);
        slow->next = NULL;
        ListNode *ans = head;
        while (temp)
        {
            ListNode *n1 = head->next;
            head->next = temp;
            temp = temp->next;
            head->next->next = n1;
            head = n1;
        }
        head = ans;
    }
};
int main()
{

    return 0;
}