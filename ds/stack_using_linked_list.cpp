#include<iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
}*top=NULL, *first=NULL;

void Push(){
    Node * temp;
    int a;

    cout<<"Enter the number to push : ";
    cin>>a;

    if(top==NULL){
        temp = new Node();
        temp->data=a;
        top = temp;
        first = temp;
    }
    else{
        temp = new Node();
        temp->data=a;
        temp->next=top;
        top = temp;
    }
}

void Display(Node * p){
    if(top==NULL){
        cout<<"Stack is empty\n";
    }
    else{
        while(p!=NULL){
            cout<<p->data<<endl;
            p=p->next;
        }
    }
}

void Pop(){
    if(top==NULL){
        cout<<"Stack Underflow\n";
    }
    else{
        cout<<"The popped element is : "<<top->data<<endl;
        top=top->next;
    }
}

int main(){
    int option;
    do{
        cout<<"1) Push\n2) Pop\n3) Display\n0) Exit\n";
        cin>>option;
        switch (option)
        {
        case 0:
            break;
        
        case 1:
            Push();
            break;
        
        case 2:
            Pop();
            break;
        case 3:
            Display(top);
            break;

        default:
            break;
        }
    }while (option!=0);
    
}