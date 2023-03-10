#include<iostream>
using namespace std;

const int MAX = 100; 
class Queue
{
    int front, rear, arr[MAX]; 
    
public:
    Queue() 
    {
        front = rear = -1;
    }

    void enqueue(int x)
    {
        if((rear+1)%MAX == front)
        {
            cout << "Queue is full\n";
            return;
        }
        rear = (rear+1)%MAX;
        arr[rear] = x;
    }

    void dequeue()
    {
        if(front == rear)
        {
            cout << "Queue is empty\n";
            return;
        }
        front = (front+1)%MAX;
    }

    int get_front()
    {
        if(front == rear)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[(front+1)%MAX];
    }

    int get_rear()
    {
        if(front == rear)
        {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[rear];
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.get_front() << endl;
    cout << q.get_rear() << endl;
    q.dequeue();
    cout << q.get_front() << endl;
    return 0;
}
