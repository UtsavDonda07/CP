//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

Node *inputList(int size)
{
    Node *head, *tail;
    int val;

    cin >> val;
    head = tail = new Node(val);

    while (--size)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n)
{
    while (n)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

Node *findIntersection(Node *head1, Node *head2);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        Node *head1 = inputList(n);
        Node *head2 = inputList(m);

        Node *result = findIntersection(head1, head2);

        printList(result);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node *findIntersection(Node *head1, Node *head2)
{
    Node *p1 = head1;
    Node *p2 = head2;
    Node *head;
    Node *lastnode;
    // lastnode = NULL;

    while (p1 != NULL || p2 != NULL)
    {

        if (p1->data == p2->data)
        {
            Node *temp;
            temp->data = p2->data;
            temp->next = NULL;
            cout << p2->data << endl;
            // if (lastnode == NULL)
            // {
            //     head->data = temp->data;
            //     cout<<head->data<<endl;
            // }
            // else
            // {
            //     lastnode->next = temp;
            // }

            p1 = p1->next;
            p2 = p2->next;
        }
        else if (p1->data > p2->data)
        {
            p2 = p2->next;
        }
        else
        {
            p1 = p1->next;
        }
    }
    return lastnode;
}