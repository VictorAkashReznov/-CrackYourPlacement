#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>
struct Node
{
    int val;
    Node *next;
};

Node *helper(Node *head)
{
    Node *n0 = NULL;
    Node *n1 = NULL;
    Node *n2 = NULL;
    Node *n3 = NULL;
    Node *n4 = NULL;
    Node *n5 = NULL;
    while (head)
    {
        if (head->val == 0)
        {
            if (n0 == NULL)
            {
                n0 = head;
                head = head->next;
                n0->next = NULL;
                n3 = n0;
            }
            else
            {
                n0->next = head;
                head = head->next;
                n0 = n0->next;
                n0->next = NULL;
            }
        }
        else if (head->val == 1)
        {
            if (n1 == NULL)
            {
                n1 = head;
                head = head->next;
                n1->next = NULL;
                n4 = n1;
            }
            else
            {
                n1->next = head;
                head = head->next;
                n1 = n1->next;
                n1->next = NULL;
            }
        }
        else if (head->val == 2)
        {
            if (n2 == NULL)
            {
                n2 = head;
                head = head->next;
                n2->next = NULL;
                n5 = n2;
            }
            else
            {
                n2->next = head;
                head = head->next;
                n2 = n2->next;
                n2->next = NULL;
            }
        }
    }
    if (n3 && n4 && n5)
    {
        n0->next = n4;
        n1->next = n5;
        return n3;
    }
    if (n3 && n5)
    {
        n0->next = n5;
        return n3;
    }
    if (n5 && n4)
    {
        n1->next = n5;
        return n4;
    }
    if (n3 && n4)
    {
        n0->next = n4;
        return n3;
    }
    if (n3)
    {
        return n3;
    }
    if (n4)
    {
        return n4;
    }
    if (n5)
    {
        return n5;
    }

    return NULL;
}
int main()
{
    Node *n1 = new Node();
    n1->val = 0;
    Node *n2 = new Node();
    n2->val = 1;
    Node *n3 = new Node();
    n3->val = 1;
    Node *n4 = new Node();
    n4->val = 0;
    Node *n5 = new Node();
    n5->val = 0;
    Node *n6 = new Node();
    n6->val = 0;
    Node *n7 = new Node();
    n7->val = 0;
    Node *n8 = new Node();
    n8->val = 0;
    Node *n9 = new Node();
    n9->val = 0;
    Node *n10 = new Node();
    n10->val = 1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    n6->next = n7;
    n7->next = n8;
    n8->next = n9;
    n9->next = n10;
    Node *head = helper(n1);
    while (head)
    {
        cout << head->val << " ";

        head = head->next;
    }

    return 0;
}