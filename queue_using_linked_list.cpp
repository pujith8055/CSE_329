#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Queue
{
private:
    Node *head;
    Node *tail;

public:
    Queue()
    {
        head = nullptr;
        tail = nullptr;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (tail != nullptr)
        {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == nullptr)
        {
            head = tail;
        }
    }

    void dequeue()
    {
        if (head == nullptr)
        {
            std::cout << "Queue is empty, cannot dequeue" << std::endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == nullptr)
        {
            tail = nullptr;
        }
    }

    int front()
    {
        if (head == nullptr)
        {
            std::cout << "Queue is empty, no front value" << std::endl;
            return -1;
        }
        return head->data;
    }

    bool isEmpty()
    {
        return head == nullptr;
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    while (!q.isEmpty())
    {
        std::cout << q.front() << std::endl;
        q.dequeue();
    }
    return 0;
}
