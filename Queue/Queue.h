#pragma once
#include "../Node.h"


class Queue
{
private:
    Node* front;
    Node* rear;
    int   count;

public:
    Queue();
    ~Queue();

    void enqueue(int value);
    bool dequeue(int& value);
    bool peek(int& value) const;
    bool isEmpty() const;
    int  size() const;
    void display() const;
};