#pragma once
#include <iostream>
using namespace std;
class Queue
{
private:
    int size;
    int count;
    int *list;
    int queueFront;
    int queueBack;
public:
    Queue();
    Queue(int size = 10);

    void Enqueue(int i);
    int Dequeue();
    bool Full();
    bool Empty();
    int Size();
    int Front();
    int Back();

    ~Queue();
};

