#include <iostream>
using namespace std;

#define SIZE 100

class Queue 
{
    private:
        int arr[SIZE];
        int front;
        int rear;

public:
    Queue() 
    {
        front = -1;
        rear = -1;
    }

    friend void enqueue(Queue &obj, int val);
    friend void dequeue(Queue &obj);

    Queue(Queue &q, char op, int val = 0) {
        if (op == '+') {
            enqueue(q, val);
        } 
        else if (op == '-') {
            dequeue(q);
        } 
        else {
            cout << "Wrong Data Type. Try Again BOT!!" << endl;
        }
    }
};

void enqueue(Queue &obj, int val) 
{
    if (obj.rear == SIZE - 1) 
    {
        cout << "Queue is full BOT!\n";
        return;
    }
    if (obj.front == -1)
        obj.front = 0;

    obj.rear++;
    obj.arr[obj.rear] = val;
    cout << val << " inserted into the queue.\n";
}

void dequeue(Queue &obj) 
{
    if (obj.front == -1 || obj.front > obj.rear) 
    {
        cout << "Queue is Empty. Fill it BOT\n";
        return;
    }
    cout << obj.arr[obj.front] << " element has been removed.\n";
    obj.front++;
}

int main() 
{
    Queue q;

    start:
    int choice;
    cout << "Kindly Select the Following Option to Execute as per your Choice : " << endl;
    cout << "1. Enqueue \n2. Dequeue\n3. Exit the Code" << endl;

    cin >> choice;

    switch(choice)
    {
        case 1:
                {
                    int a;
                    cout << "Executing Enqueue Function! Kindly Input the Element for the Insert : " << endl;
                    cin >> a;

                    Queue(q, '+', a);
                    goto start;
                }
        case 2:
                {
                    cout << "Executing Dequeue Function" << endl;

                    Queue(q, '-');
                    goto start;
                }
        case 3:
                {
                    cout << "Exited the code successfully" << endl;
                    exit(0);
                }
        default:
                {
                    cout << "Wrong Choice! Select Again!" << endl;
                    goto start;
                }
    }

    return 0;
}
