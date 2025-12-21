/*
Delete the Entire Linked list.
*/

#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    struct node *temp = NULL;

    int n;
    cout<<"How many Nodes you want to create? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Enter the Value you want to insert at node "<<i<<" : "<<endl;
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
        cout<<"The List Empty!"<<endl;
        return 0;
    }else{
        temp = head;
        while(temp != NULL){
            temp = temp->link;
            free(head);
            head = NULL;
            head = temp;
        }
    }
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
    return 0;
}