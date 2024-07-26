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
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *n1 = NULL;
        ListNode *n2 = NULL;
        while (head)
        {
            if (head->val != val)
            {
                if (n1 == NULL)
                {
                    n1 = head;
                    n2 = head;
                    head = head->next;
                    n1->next = NULL;
                    n2->next = NULL;
                    // cout<< head->val <<" hello \n";
                }
                else
                {
                    n1->next = head;
                    head = head->next;
                    n1 = n1->next;
                    n1->next = NULL;
                }
            }
            else
            {
                ListNode *n3 = head;
                head = head->next;
                n3->next = NULL;
                delete n3;
            }
        }
        return n2;
    }
};
int main()
{

    return 0;
}