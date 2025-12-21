/*
Delete the Last node using single pointer in the linkedlist.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    struct node *link;
};

int main(){

    struct node *head = NULL;
    struct node *temp = NULL;

    int n;
    cout<<"How many nodes you want to create? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Enter the value of the node "<<i<<":"<<endl;
        cin>>val;

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->link = NULL;

        if(head == NULL){
            head = newnode;
            temp = newnode;
        }else{
            temp->link = newnode;
            temp = newnode;
        }
    }
    if(head == NULL){
        cout<<"List is Empty\n"<<endl;
        return 0;
    }
    if(head->link == NULL){
        free(head);
        head = NULL;
    }else{
        temp = head;
        while(temp->link->link != NULL){
        temp = temp->link;
    }
        free(temp->link);
        temp->link = NULL;
        }
    
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
}