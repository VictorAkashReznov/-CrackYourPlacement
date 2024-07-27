#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
struct Node
{
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Solution
{
    Node *reverseList(Node *head)
    {
        Node *prev = NULL;
        Node *curr = head;
        while (curr)
        {
            Node *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node *n1 = reverseList(head);
        Node *n2 = n1;
        while (n1 && n1->next)
        {
            if (n1->data > n1->next->data)
            {
                Node *n3 = n1->next;
                n1->next = n1->next->next;
                n3->next = NULL;
                delete n3;
            }
            else
            {
                n1 = n1->next;
            }
        }
        return reverseList(n2);
    }
};
int main()
{

    return 0;
}