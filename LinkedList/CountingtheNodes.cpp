/*
Counting the how many nodes in the linkedlist.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 30;
    current->link = NULL;
    head->link->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 20;
    current->link = NULL;
    head->link->link->link = current;

    int count = 0;
    if(head == NULL){
        cout<<"List is Empty"<<endl;
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
        count++;
        ptr = ptr->link;
    }
    cout<<count<<endl;
    return 0;
}