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