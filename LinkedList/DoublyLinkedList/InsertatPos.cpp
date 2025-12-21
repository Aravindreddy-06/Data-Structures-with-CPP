/*
Insert the Node at the Any position.
*/

#include<iostream>
#include<list>
using namespace std;

struct node{
    node *prev;
    char data;
    node *next;
};

int main(){
    node *head = NULL;
    node *temp = NULL;

    int n;
    cout<<"How many Nodes you want to insert? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Insert the Value at Node "<<i<<":"<<endl;
        cin>>val;

        node *createnode = new node();
        createnode ->prev = NULL;
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
    node *newnode = new node();
    newnode->prev = NULL;
    newnode->data = 'd';
    newnode->next = NULL;
    //Logic for the Insert the Node at the End.

    int pos;
    cout<<"Enter the position you want to insert: "<<endl;
    cin>>pos;

    temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->next;
    }
    if(temp->next == NULL){
        temp->next = newnode;
        newnode->prev = temp;
    }else{
    node *ptr = temp->next;
    
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = ptr;
    ptr->prev = newnode;
    }

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}