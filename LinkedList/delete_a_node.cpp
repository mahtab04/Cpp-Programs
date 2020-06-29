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

void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

//delete a node at a position

Node *deleteNode(Node *head, int pos)
{
    if (head == NULL)
    {
        return head;
    }
    if (pos == 0)
    {
        return head->next;
    }
    Node *temp = head;
    int currpos = 0;
    while (temp != NULL && currpos < pos - 1)
    {
        temp = temp->next;
        currpos++;
    }
    if (temp == NULL || temp->next == NULL)
    {
        return head;
    }
    temp = temp->next->next;
    return head;
}

int main()
{
    Node *head = takeInput();
    printll(head);
    cout << '\n';
    deleteNode(head, 3);
    printll(head);
}
