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

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution
{
    int m = 1e9 + 7;
    void reverseLL(Node *&head)
    {
        Node *prev = NULL;
        Node *curr = head;
        while (curr)
        {
            Node *n1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = n1;
        }
        head = prev;
    }

public:
    long long multiplyTwoLists(Node *first, Node *second)
    {
        // code here
        reverseLL(first);
        reverseLL(second);

        // long long ans = 0;
        // size_t multiplier = 1;
        // Node *n1 = first;
        // while (second)
        // {
        //     int carry = 0;
        //     size_t p = multiplier;
        //     first = n1;
        //     while (first)
        //     {
        //         int a = first->data * second->data + carry;
        //         ans = (ans + ((a % 10) * p) % m) % m;
        //         carry = a / 10;
        //         p = (p % m * 10) % m;
        //         first = first->next;
        //     }
        //     ans = (ans + (carry * p) % m) % m;

        //     multiplier = (multiplier % m * 10) % m;
        //     second = second->next;
        // }
        // return ans;

        long long l1 = 0;
        long long l2 = 0;
        long long k = 1;
        while (first)
        {
            l1 = (l1 + (first->data * k) % m) % m;

            k = (k * 10) % m;

            first = first->next;
        }
        k = 1;
        while (second)
        {
            l2 = (l2 + (second->data * k) % m) % m;

            k = (k * 10) % m;

            second = second->next;
        }

        return (l1 * l2) % m;
    }
};
int main()
{
    Node *n1 = new Node(1);
    Node *n2 = new Node(0);
    Node *n3 = new Node(0);
    n1->next = n2;
    n2->next = n3;
    Node *n4 = new Node(1);
    Node *n5 = new Node(0);
    n4->next = n5;
    solution s1;
    cout << s1.multiplyTwoLists(n1, n4);

    return 0;
}