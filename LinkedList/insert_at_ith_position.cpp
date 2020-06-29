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



//insert a  node at specific postiton
Node *insertAtIthPosition(Node *head, int pos, int data)
{
    int count = 0;
    Node *temp = head;
    Node *newNode = new Node(data);
    if (pos == 0)
    {
        head = newNode;
        return head;
    }
    while (temp != NULL && count < pos - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    {
        Node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
    }
    return head;
}



int main()
{
    Node *head = takeInput();
    printll(head);
    cout << '\n';
    insertAtIthPosition(head, 3, 70);
    printll(head);
        
}
