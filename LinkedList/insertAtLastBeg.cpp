#include "Node.h"

Node *insertAtBegning(Node *head, int data)
{
    // Create a new node with the provided data
    Node *temp = new Node(data);

    // Set the 'next' pointer of the new node to the current head
    temp->next = head;

    // Return the new node as the new head of the linked list
    return temp;
}
Node *insertAtLast(Node *head, int data)
{

    // Create a new node with the provided data
    Node *temp = new Node(data);
    for (Node *i = head; i != nullptr; i = i->next)
    {
        if (i->next == nullptr)
        {
            i->next = temp;
            break;
        }
    }
    return head;
}
int main()
{

    Node *head = nullptr;
    head->takeInput();
    std::cout << "Before insertion: ";
    head->print(head);
    head = insertAtBegning(head, 10);
    std::cout << "After insertion: ";

    head->print(head);
    head = insertAtLast(head, 20);
    std::cout << "After insertion: ";
    head->print(head);
    return 0;
}