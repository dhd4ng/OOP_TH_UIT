#include "Node.h"
class Linkedlist
{
private:
    Node* head;

public:
    Linkedlist();
    void addTail(int);
    void addHead(int);
    void printList();
    void getInfo();

    ~Linkedlist();
};