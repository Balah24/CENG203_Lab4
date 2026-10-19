#include "Labs.h"
#include "../Stack/Stack.h"
#include "../Stack/ArrayStack.h"
#include "../Queue/Queue.h"
#include "../Queue/CircularQueue.h"
#include <iostream>
using namespace std;

void runWeek04() {
    cout << "--- Week 4: Stacks and Queues ---" << endl;

    // تجربة بسيطة للـ Stack
    Stack myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Stack contents: ";
    myStack.display();

    int poppedVal;
    myStack.pop(poppedVal);
    cout << "Popped value: " << poppedVal << endl;

    cout << "Stack contents after pop: ";
    myStack.display();
}