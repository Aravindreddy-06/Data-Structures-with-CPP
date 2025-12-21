/*
Delete the Node at the Beginning.
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


//Logic for the Delete the Node at the Begin.
    temp = head;
    head = head->next;    
    free(temp);
    temp = NULL;
    head->prev = NULL;

    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" <-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}