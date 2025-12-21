/*
Delete the Last Node from the Circular Linked List.
*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    node *next;
    char data;
};

int main(){
    node *head = NULL;
    node *temp = NULL;

    int n;
    cout<<"How many nodes do you want ? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Enter the Value at Node "<<i<<":"<<endl;
        cin>>val;

        node *createnode = new node();
        createnode->data = val;
        createnode->next = NULL;

        if(head == NULL){
            head = createnode;
            temp = createnode;
        }else{
            temp->next = createnode;
            temp = createnode;
        }
    }
    //Connect the last node to first.then it becomes Circular.
    if(temp != NULL){
        temp->next = head;
    }
    //Logic to delete the Last Node.
    node *ptr = head;
    if(head == NULL){
        cout<<"The List is Empty!"<<endl;
        return 0;
    }else if(head->next == NULL){
        delete head;
    }else{
        while(ptr->next->next != head){
            ptr = ptr->next;
        }
        node *to_delete = ptr->next;
        ptr->next = head;
        delete to_delete;
    }

    ptr = head;
    if(head != NULL){
        while(true){
            cout<<ptr->data<<" -> ";
            ptr = ptr->next;
            if(ptr == head)
                break;
        }
    }
    cout<<ptr->data<<endl;
    return 0;
}