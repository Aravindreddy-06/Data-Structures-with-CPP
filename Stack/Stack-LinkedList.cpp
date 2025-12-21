/*
Implementing the stack using linkedlist
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node *next;
};

int main(){
    node *top = NULL;

    int n;
    cout<<"How many Elements do you want? "<<endl;
    cin>>n;

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        char val;
        cin>>val;

        node *newnode = new node();
        newnode->data = val;
        newnode->next = top;
        top = newnode;
    }

    cout<<"Display the elements: "<<endl;
    node *temp = top;
    while(temp == NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //Top Element
    if(top != NULL){
        cout<<"Top Element is: "<<top->data<<endl;
    }else{
        cout<<"Stack is Empty!"<<endl;
    }

    //Popping the Elements.
    int d;
    cout<<"How many want to delete? "<<endl;
    cin>>d;
    for(int i=0; i<d; i++){
        if(top == NULL){
            cout<<"stack is empty!"<<endl;
            break;
        }
        node *temp = top;
        cout<<"Deleted "<<temp->data<<" ";
        top = top->next;
        delete temp;
    }
    cout<<endl;

    //display Remaining Elements.
    temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    if(top == NULL){
        cout<<"Stack is Empty! "<<endl;
    }else{
        cout<<"Stack is Not Empty."<<endl;
    }
    return 0;
}