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

//Function to delete head of a linked list
Node *deleteHead(Node *head)
{
    //Your code here
    if (head == NULL)
        return NULL;
    Node *temp = head->next;
    delete (head);
    return temp;
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
    head = deleteHead(head);
    printll(head);
}