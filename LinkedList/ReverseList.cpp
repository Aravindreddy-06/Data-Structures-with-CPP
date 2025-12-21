/*
Reverse the Entire Linked list.

input:

 head[1000]
  ↓
[ A | 2000 ] → [ B | 3000 ] → [ C | 4000 ] → [ D | 5000 ] → [ E | NULL ]
 1000          2000            3000            4000            5000


 Output: 
                                                                head[5000]
                                                                 ↓
[ A | NULL ] → [ B | 1000 ] → [ C | 2000 ] → [ D | 3000 ] → [ E | 4000 ]
 1000          2000            3000            4000            5000


Reversing the Linked list means Revering the addersses of the nodes.

Normal : First Node Holds the Second node address
Reverse: Second Node Holds the First node address
*/

#include<bits/stdc++.h>
using namespace std;

struct node {
    char data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    struct node *temp = NULL;

    int n;
    cout<<"How many Nodes you want to create? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        char val;
        cout<<"Enter the Value you want to insert at node "<<i<<" : "<<endl;
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
    //Logic for the Reversing the list.
    struct node *prev = NULL;
    struct node *next = NULL;

    while(head != NULL){
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
    
    //Printing the reversing list.
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->link;
    }
    cout<<"NULL"<<endl;
    return 0;
}