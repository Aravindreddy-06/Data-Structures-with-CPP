/*
Inserting the node at the beginning of the Circular Doubly LinkedList.
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
        cout<<"Enter the value at Node "<<i<<" : "<<endl;
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
            createnode->prev = temp;
            temp = createnode;
        }
    }

    // Make circular
    if(temp != NULL){
        temp->next = head;
        head->prev = temp;
    }

    // Insert new node at beginning (NO EXTRA POINTERS)
    node *newnode = new node();
    newnode->data = 'E';

    newnode->next = head;       // newnode -> head
    newnode->prev = head->prev; // newnode -> tail (using head->prev)

    head->prev->next = newnode; // tail -> next = newnode
    head->prev = newnode;       // head -> prev = newnode

    head = newnode;             // update head

    // Print list
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
