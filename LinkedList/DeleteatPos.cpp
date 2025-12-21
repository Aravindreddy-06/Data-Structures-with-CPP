/*
Delete the node at EXACT position in the linked list.
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
        cout<<"Enter the value of node "<<i<<": ";
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

    int pos;
    cout<<"Enter position to delete: ";
    cin>>pos;

    if(pos == 1){
        temp = head;
        head = head->link;
        free(temp);
    }
    else{
        temp = head;
        for(int i=1; i<pos-1; i++){
            temp = temp->link;
        }
        struct node *deleteNode = temp->link;
        temp->link = deleteNode->link;
        free(deleteNode);
        deleteNode = NULL;
    }

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;

    return 0;
}
