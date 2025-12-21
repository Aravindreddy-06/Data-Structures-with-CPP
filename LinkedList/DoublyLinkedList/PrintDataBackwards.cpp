/*
Never traverse till temp != NULL when you need the LAST NODE.
Always stop at temp->next == NULL.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *prev;
    char data;
    struct node *next;
};

int main(){
    struct node *head = NULL;
    struct node *temp = NULL;

    int n;
    cout<<"How Many Nodes do you Want "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Enter the value at node: "<<i<<":"<<endl;
        cin>>val;

        struct node *createnodes = new node();
        createnodes->prev = NULL;
        createnodes->data = val;
        createnodes->next = NULL;

        if(head == NULL){
            head = createnodes;
            temp = createnodes;
        }else{
            temp->next = createnodes;
            createnodes->prev = temp;
            temp = createnodes;

        }
    }
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    while(temp != NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->prev;
    }
    cout<<"NULL"<<endl;
    return 0;
}

