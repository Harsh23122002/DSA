#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* first = NULL;
Node* last = NULL;

void Create(){

    Node* temp=NULL;
    int a;
    if(first==NULL){
        first = new Node();
        cout<<"Enter the number to be stored in the first node: \n";
        cin>>a;
        first->data=a;
        first->next=NULL;
        last = first;
    }
    else{
        temp = new Node();
        cout<<"Enter the number to be stored in the node: \n";
        cin>>a;
        temp->data=a;
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }

}

void Display(Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }cout<<endl;
}

int main(){
    int option;
    do{
        cout<<"1) Insert\n2) Display\n0) Exit\n";
        cin>>option;
        switch (option)
        {
        case 0:
            break;
        
        case 1:
            Create();
            break;
        
        case 2:
            Display(first);
            break;
        
        default:
            break;
        }
    }while(option!=0);
}