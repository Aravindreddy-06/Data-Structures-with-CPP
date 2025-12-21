/*
Inserting the new node at the end of the linked list.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
    int n;
    cout<<"How many nodes do you want to create? "<<endl;
    cin>>n;

    struct node *head = NULL;
    struct node *ptr = NULL;

    for(int i=1; i<=n; i++){
        int val;
        cout<<"Enter the data value "<< i <<":"<<endl;
        cin>>val;

        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->link = NULL;

        if(head == NULL){
            head = newnode;
            ptr = newnode;
        }else{
            ptr->link = newnode;
            ptr = newnode;
        }
    }
    struct node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = 50;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
    
    ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->link;
    }
    cout<<"NULL"<<endl;
    return 0;
}