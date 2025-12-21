#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL; //Creating the head pointer to access the first node of the linkedlist.
    head = (struct node *)malloc(sizeof(struct node)); //Initializing the address of the first node to the head.
    head -> data = 27;                  //Initializing the value to the data variable by the help of head.
    head -> link = NULL;                //Initializing the NULL address of the last node.
    cout<<head->data<<endl;             //printing the data value.
    return 0;
}