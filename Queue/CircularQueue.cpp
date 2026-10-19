#include "CircularQueue.h"
#include <iostream>
using namespace std;

CircularQueue::CircularQueue()
{
    frontIndex = 0;
    rearIndex = -1;
    count = 0;
}

bool CircularQueue::enqueue(int value)
{
    if (isFull())
        return false;

    rearIndex = (rearIndex + 1) % CAPACITY;
    items[rearIndex] = value;
    count++;
    return true;
}

bool CircularQueue::dequeue(int& value)
{
    if (isEmpty())
        return false;

    value = items[frontIndex];
    frontIndex = (frontIndex + 1) % CAPACITY;
    count--;
    return true;
}

bool CircularQueue::peek(int& value) const
{
    if (isEmpty())
        return false;
    value = items[frontIndex];
    return true;
}

bool CircularQueue::isEmpty() const
{
    return count == 0;
}

bool CircularQueue::isFull() const
{
    return count == CAPACITY;
}

int CircularQueue::size() const
{
    return count;
}

void CircularQueue::display() const
{
    cout << "front ->";
    for (int i = 0, idx = frontIndex; i < count; i++) {
        cout << " " << items[idx];
        idx = (idx + 1) % CAPACITY;
    }
    if (isEmpty())
        cout << " (empty)";
    cout << " <- rear" << endl;
}