#include<iostream>

using namespace std;

int stack[10];
int top=-1;

void Push(){
    if(top==9){
        cout<<"Stack overflow\n";
    }
    else{
        top++;
        cin>>stack[top];
    }
}

void Pop(){
    int popped;
    if(top==-1){
        cout<<"Stack underflow\n";
    }
    else{
        popped=stack[top];
        cout<<popped<<endl;
        top--;
    }
}

void Display(){
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<endl;
    }cout<<endl;
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
            Display();
            break;

        default:
            break;
        }
    }while(option!=0);
}