#include <iostream>
#include "Labs/Labs.h"
using namespace std;

int main()
{
    int choice;
    do {
        cout << "\n===== CENG203 Data Structures Lab =====" << endl;
        cout << " 4. Week 4 - Stacks and queues" << endl;
        cout << " 0. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 4:  runWeek04(); break;
        case 0:  cout << "Bye!" << endl; break;
        default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}