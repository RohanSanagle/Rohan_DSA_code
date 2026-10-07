

#include <iostream>
using namespace std;

struct Node
{
    int customerID;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

// Add customer to queue
void enqueue(int id)
{
    Node* newNode = new Node;
    newNode->customerID = id;
    newNode->next = nullptr;

    if (rear == nullptr)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    cout << "Customer added successfully.\n";
}

// Serve customer
void dequeue()
{
    if (front == nullptr)
    {
        cout << "Queue is empty.\n";
        return;
    }

    Node* temp = front;

    cout << "Customer " << front->customerID
         << " is served.\n";

    front = front->next;

    if (front == nullptr)
        rear = nullptr;

    delete temp;
}

// Display queue
void display()
{
    if (front == nullptr)
    {
        cout << "Queue is empty.\n";
        return;
    }

    Node* temp = front;

    cout << "Customer Queue: ";

    while (temp != nullptr)
    {
        cout << temp->customerID << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    int choice, id;

    do
    {
        cout << "\n--- Supermarket Customer Queue ---\n";
        cout << "1. Add Customer\n";
        cout << "2. Serve Customer\n";
        cout << "3. Display Queue\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter Customer ID: ";
                cin >> id;
                enqueue(id);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program ended.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
