#include "Linkedlist.h"
Linkedlist::Linkedlist() { head = NULL; }

void Linkedlist::addTail(int data)
{
    Node* newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void Linkedlist::addHead(int data)
{
    Node* newNode = new Node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void Linkedlist::printList()
{
    Node* temp = head;

    if (head == NULL)
    {
        cout << "List empty" << endl;
        return;
    }

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void Linkedlist::getInfo()
{
    int temp = 1;
    cout << "Nhap cac so nguyen duong: \n";
    cout << "Dung lai khi nhap '-1'.\n";
    while (temp != 0)
    {
        int x;
        fflush(stdin);
        cin >> x;
        if (x == -1)
        {
            cout << "Ket thuc viec nhap.\n";
            return;
        }
        else
            addHead(x);
    }
}

Linkedlist::~Linkedlist()
{
}
