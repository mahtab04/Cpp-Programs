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

//Function to delete tail of a linked list
Node *deleteTail(Node *head)
{
    //Your Code here
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    delete (curr->next);
    curr->next = NULL;
    return head;
}

//function to print linked list
void printll(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << '\n';
}

int main()
{
    Node *head = takeInput();
    head = deleteTail(head);
    printll(head);
}