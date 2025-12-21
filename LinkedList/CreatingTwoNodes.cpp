//Creating the two nodes of the linkedlist.

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 27;
    current->link = NULL;
    head->link = current;
    
    cout<<"Head Data: "<<head->data<<endl;
    cout<<"Head Link: "<<head->link<<endl;
    cout<<"Current Data: "<<current->data<<endl;
    cout<<"Current Link: "<<current->link<<endl;
    return 0;
}