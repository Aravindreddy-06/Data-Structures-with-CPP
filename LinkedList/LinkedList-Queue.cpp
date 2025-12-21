/*
Implement the LinkedList using Queue.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node *next;
};

int main(){
    queue<char>q;

    int n;
    cout<<"How many Elements: "<<endl;
    cin>>n;

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        char x;
        cin>>x;
        q.push(x);
    }
    node *head = NULL;
    node *temp = NULL;

    while(!q.empty()){
        node *newnode = new node();
        newnode->data = q.front();
        q.pop();
        newnode->next = NULL;

        if(head == NULL){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    cout<<"Display LinkedList"<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}