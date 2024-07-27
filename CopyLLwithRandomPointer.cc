#include <bits/stdc++.h>
using namespace std;
#define PII pair<int, int>
#define VI vector<int>
#define MAX_SET set<int, greater<int>> set_name
#define PQ priority_queue<int>
#define MIN_PQ priority_queue<int, vector<int>, greater<int>>

class Node
{
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val)
    {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution
{
    unordered_map<Node *, int> mymap1;
    unordered_map<int, Node *> mymap2;

public:
    Node *copyRandomList(Node *head)
    {
        Node *n1 = head;
        int a = 0;
        while (n1)
        {
            mymap1[n1] = a++;
            n1 = n1->next;
        }
        n1 = head;
        Node *newHead = NULL;
        Node *newTail = NULL;
        while (n1)
        {
            Node *n2 = new Node(n1->val);
            if (newHead == NULL)
            {
                newHead = n2;
                newTail = n2;
            }
            else
            {
                newTail->next = n2;
                newTail = n2;
            }
            n1 = n1->next;
        }

        // fill the second Map
        n1 = newHead;
        a = 0;
        while (n1)
        {
            mymap2[a++] = n1;
            n1 = n1->next;
        }
        n1 = head;
        Node *n2 = newHead;

        while (n1)
        {
            if (n1->random == NULL)
            {
                n2->random = NULL;
            }
            else
                n2->random = mymap2[mymap1[n1->random]];

            n1 = n1->next;
            n2 = n2->next;
        }

        return newHead;
    }
};
int main()
{

    return 0;
}