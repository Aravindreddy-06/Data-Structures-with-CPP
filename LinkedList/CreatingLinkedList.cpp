//Creating Entire linked List.

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};


int main(){
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 100;
    head->link = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->data = 200;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 300;
    current->link = NULL;
    head->link->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 400;
    current->link = NULL;
    head->link->link->link = current;

    cout<<"1st Node Data: "<<head->data<<endl;
    cout<<"1st Node Link: "<<head->link<<endl;

    cout<<"2nd Node Data: "<<head->link->data<<endl;
    cout<<"2nd Node Link: "<<head->link->link<<endl;

    cout<<"3rd Node Data: "<<head->link->link->data<<endl;
    cout<<"3rd Node Link: "<<head->link->link->link<<endl;

    cout<<"4th Node Data: "<<head->link->link->link->data<<endl;
    cout<<"4th Node Link: "<<head->link->link->link->link<<endl;
    return 0;
}