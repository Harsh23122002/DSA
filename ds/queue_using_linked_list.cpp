#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void Enqueue()
{
    int a;

    Node *temp;
    if (front == NULL)
    {
        front = new Node();
        temp = new Node();
        rear = new Node();
        cin >> a;
        temp->data = a;
        temp->next = NULL;
        front->next = temp;
        front = temp;
        rear->next = temp;
        rear = temp;
    }
    else
    {
        temp = new Node();
        cin >> a;
        temp->data = a;
        temp->next = NULL;
        rear->next = temp;
        rear = temp;
    }
}

void Dequeue()
{
    if (front== NULL)
    {
        cout << "Queue empty\n";
    }
    else
    {
        cout <<"The dequeued element is : "  <<front->data<<endl;
        front = front->next;
    }
}

void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main(){
    int option;
    do{
        cout<<"1) Enqueue\n2) Dequeue\n3) Display\n0) Exit\n";
        cin>>option;
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
            Display(front);
            break;

        default:
            break;
        }
    }while (option!=0);
    
}