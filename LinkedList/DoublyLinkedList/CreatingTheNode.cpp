/*
Creatig the Double Linked List.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

int main(){
    struct node *createNode = new node();
    createNode->prev = NULL;
    createNode->data = 10;
    createNode->next = NULL;

    cout<<createNode->data<<endl;
    return 0;
}