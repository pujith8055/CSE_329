#include <iostream>
using namespace std;

const int SIZE = 100;

class twoStacks
{
    int arr[SIZE];
    int top1, top2;
public:
    twoStacks()
    {
        top1 = -1;
        top2 = SIZE;
    }
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
        else
        {
            cout << "Stack Overflow";
            exit(1);
        }
    }
    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
        else
        {
            cout << "Stack Overflow";
            exit(1);
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
        {
            cout << "Stack Underflow";
            exit(1);
        }
    }
    int pop2()
    {
        if (top2 < SIZE)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
        {
            cout << "Stack Underflow";
            exit(1);
        }
    }
};

int main()
{
    twoStacks ts;
    ts.push1(11);
    ts.push1(15);
    ts.push1(19);
    ts.push1(18);
    ts.push2(21);
    ts.push2(22);
    ts.push2(23);
    ts.push2(24);
    cout << "Popped element from stack 1 is " << ts.pop1() << endl;
    cout << "Popped element from stack 2 is " << ts.pop2() << endl;
    return 0;
}