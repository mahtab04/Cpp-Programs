bool searchItretive(Node *head, int key)
{

    for (Node *i = head; i != nullptr; i = i->next)
    {
        if (i->data == key)
        {
            return true;
        }
    }
    return false;
}

bool searchRecursive(Node *head, int key)
{
    if (head == nullptr)
        return false;
    if (head->data == key)
        return true;
    return searchRecursive(head->next, key);
}