// Input : N = 2
// LinkedList : 1->2->3->4->5->6->7->8->9
// Output : 8
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//Function for taking input
Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }

    return head;
}

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{

    int len = 0;
    for (Node *temp = head; temp != NULL; temp = temp->next)
        len++;
    if (len < n)
        return -1;
    Node *curr = head;
    for (int i = 1; i < len - n + 1; i++)
        curr = curr->next;

    return curr->data;
}

int main()
{
    Node *head = takeInput();
    int result = getNthFromLast(head, 2);
    cout << result << endl;
}