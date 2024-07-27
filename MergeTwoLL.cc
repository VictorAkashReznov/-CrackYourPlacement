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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *n1 = NULL;
        ListNode *n2 = NULL;
        while (list1 && list2)
        {
            if (list1->val > list2->val)
            {
                if (n1 == NULL)
                {
                    n1 = list2;
                    n2 = list2;
                    list2 = list2->next;
                    n1->next = NULL;
                    n2->next = NULL;
                }
                else
                {
                    n1->next = list2;
                    list2 = list2->next;
                    n1 = n1->next;
                    n1->next = NULL;
                }
            }
            else
            {
                if (n1 == NULL)
                {
                    n1 = list1;
                    n2 = list1;
                    list1 = list1->next;
                    n1->next = NULL;
                    n2->next = NULL;
                }
                else
                {
                    n1->next = list1;
                    list1 = list1->next;
                    n1 = n1->next;
                    n1->next = NULL;
                }
            }
        }
        if (list1)
        {
            if (n1 == NULL)
            {
                n1 = list1;
                n2 = list1;
            }
            else
            {
                n1->next = list1;
            }
        }
        if (list2)
        {
            if (n1 == NULL)
            {
                n1 = list2;
                n2 = list2;
            }
            else
            {
                n1->next = list2;
            }
        }
        return n2;
    }
};
int main()
{

    return 0;
}