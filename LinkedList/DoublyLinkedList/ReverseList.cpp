/*
Reverse the Doubly Linked List 
*/

#include<bits/stdc++.h>
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
    cout<<"How many nodes do you want ? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Enter the Value for the Node "<<i<<":"<<endl;
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
    node *ptr = head;
    node *tempNode = NULL;

    while(ptr != NULL){
        tempNode = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = tempNode;

        ptr = ptr->prev;
    }
    if(tempNode != NULL){
        head = tempNode->prev;
    }

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}