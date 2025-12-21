/*
Create the Circular Linked List.
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    node *next;
    char data;
};

int main(){
    node *head = NULL;
    node *temp = NULL;

    int n;
    cout<<"How many nodes do you want ? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Enter the Value at Node "<<i<<":"<<endl;
        cin>>val;

        node *createnode = new node();
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
    //Connect the last node to first.then it becomes Circular.
    if(temp != NULL){
        temp->next = head;
    }
    //Creating the Newnode to insert.
    node *newnode = new node();
    newnode->data = 'E';
    newnode->next = NULL;

    //Logic to Insert the Node at the Beginning.    
    newnode->next = head;
    head = newnode;
    temp->next = head;//Pointing the last node to the head

    temp = head;
    if(temp != NULL){
        while(true){
            cout<<temp->data<<" -> ";
            temp = temp->next;

            if(temp == head)
                break;
        }
    }
    cout<<temp->data<<endl;
    return 0;
}