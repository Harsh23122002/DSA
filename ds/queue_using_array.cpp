#include <iostream>

using namespace std;

int queue[10];
int rear = -1, front = -1;

void Enqueue()
{
    if (rear < 9)
    {
        if (front == -1)
        {
            front = 0;
            rear++;
            cin >> queue[rear];
        }
        else
        {
            rear++;
            cin >> queue[rear];
        }
    }
}

void Dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue underflow\n";
    }
    else
    {
        cout << "Dequeued element is : " << queue[front];
        front++;
    }
}

void Display()
{
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int main()
{
    int option;
    do
    {
        cout << "1) Enqueue\n2) Dequeue\n3) Display\n0) Exit\n";
        cin >> option;
        switch (option)
        {
        case 0:
            break;

        case 1:
            Enqueue();
            break;

        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;

        default:
            break;
        }
    } while (option != 0);
}