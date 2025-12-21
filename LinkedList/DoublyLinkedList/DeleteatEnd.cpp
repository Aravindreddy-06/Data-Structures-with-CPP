/*
Delete the Node at the End.
*/

#include<iostream>
#include<list>
using namespace std;

struct node{
    node *prev;
    char data;
    node *next;
};

int main(){
    node *head = NULL;
    node *temp = NULL;

    int n;
    cout<<"How many Nodes you want to insert? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Insert the Value at Node "<<i<<":"<<endl;
        cin>>val;

        node *createnode = new node();
        createnode ->prev = NULL;
        createnode->data = val;
        createnode->next = NULL;

        if(head == NULL){
            head = createnode;
            temp = createnode;
        }else{
            temp->next = createnode;
            createnode->prev = temp;
            temp = createnode;
        }
    }

    node *newnode = new node();
    newnode->prev = NULL;
    newnode->data = 'c';
    newnode->next = NULL;

//Logic for the Delete the Node at the End.
    //starts
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    node *ptr = temp->prev;
    free(temp);
    temp = NULL;
    ptr->next = NULL;
    //Ends
    
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}