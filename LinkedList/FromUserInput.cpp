/*
Creating the N nodes of linkedlist from taking the input from the user.
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
    cout<<"How many Nodes you Want? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        int val;
        cout<<"Enter the Data for the Node "<< i <<":"<<endl;
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
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;

    return 0;
}