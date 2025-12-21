/*
Delete the First node of the likedlist.
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
        cout<<"Enter the value you want to insert at: "<<i<<":"<<endl;
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
    struct node *deleteNode = head;
    head = head->link;
    free(deleteNode);
    deleteNode = NULL;

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
    return 0;
}