/*
Creating the Doubly Circular Linkedlist.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    node *prev;
    node *next;
    char data;
};

int main(){
    node *head = NULL;
    node *temp = NULL;

    int n;
    cout<<"How many Nodes you Want?"<<endl;
    cin>>n;

    for(int i = 1; i<=n; i++){
        char val;
        cout<<"Enter the value at Node"<<i<<" : "<<endl;
        cin>>val;

        node *createnode = new node();
        createnode->prev = NULL;
        createnode->data = val;
        createnode->next = NULL;

        if(head == NULL){
            head = createnode;
            temp = createnode;
        }else{
            temp->next = createnode;
            temp = createnode;
        }
    }
    if(temp != NULL){
        temp->next = head;
    }
    temp = head;
    if(temp != NULL){
        while(true){
            cout<<temp->data<<" <-> ";
            temp = temp->next;

            if(temp == head)
                break;
        }
    }

    cout<<temp->data<<endl;
    return 0;
}