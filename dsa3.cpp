#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    char str;
    node *next;
    node(char str)
    {
        this->str = str;
        next = NULL;
    }
};

bool check(node *head, char data)
{
    if (head == NULL)
        return false;

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->str == data)
            return true;
        temp = temp->next;
    }
    return false;
}

node *delete_at(node *head, char data)
{
    if (head == NULL)
        return NULL;
    if (head->str == data)
        return head->next;
    node *temp = head;
    while (temp != NULL && temp->next->str != data)
    {
        temp = temp->next;
    }
    if (temp != NULL)
    {
        node *point = temp->next;
        temp->next = point->next;
        delete point;
    }
    return head;
}

node *insertattail(node *head, char str)
{
    node *newNODE = new node(str);
    if (head == NULL)
    {
        head = newNODE;
        return head;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNODE;
    return head;
}

node *mid(node *head, char data)
{
    if (head == NULL)
    {
        node *newNODE = new node(data);
        head = newNODE;
        return head;
    }
    else if (head->next == NULL)
    {
        node *newNODE = new node(data);
        head->next = newNODE;
        return head;
    }
    else
    {
        node *slow = head;
        node *fast = head->next;
        node *newNODE = new node(data);
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        newNODE->next = slow->next;
        slow->next = newNODE;
        return head;
    }
}

int main()
{
    

    return 0;
}