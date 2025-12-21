/*
Inserting the Node at the certain position.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    struct node *temp = NULL;

    int n;
    cout<<"How many nodes do you want to create? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        int val;
        cout<<"Enter the value for the positon: "<<i<<":"<<endl;
        cin>>val;

        struct node *newnode = NULL;
        newnode = (struct node *)malloc(sizeof(struct node));
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

    struct node *addingNode = NULL;
    addingNode = (struct node *)malloc(sizeof(struct node));
    addingNode->data = 800;
    addingNode->link = NULL;

    int pos;
    cout<<"Where you want to insert the node? "<<endl;
    cin>>pos;

    temp = head;
    for(int i=1; i<pos-1; i++){
        temp = temp->link;
    }
    addingNode->link = temp->link;
    temp->link = addingNode;

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
}