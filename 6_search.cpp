#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

/*********insertion beginning**************/
void insbeg(Node **head, int x)
{
    Node *n = new Node();
    n->data = x;
    n->next = *head;
    *head = n;
}
/***********search**************/
bool search(Node *head, int x)
{
    Node *current = head;
    while (current != NULL)
    {
        if (current->data == x)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}
/************************************/
int main()
{
    Node *head = NULL;
    insbeg(&head, 1);
    insbeg(&head, 2);
    insbeg(&head, 3);
    insbeg(&head, 4);
    insbeg(&head, 5);
    search(head, 2) ? cout << "Yes" : cout << "No";
    return 0;
}