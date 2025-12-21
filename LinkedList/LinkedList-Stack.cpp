/*
Implement the LinkedList using stack.
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    char data;
    node *next;
};

int main(){
    stack<char>st;

    int n;
    cout<<"How many Elements: "<<endl;
    cin>>n;

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        char x;
        cin>>x;
        st.push(x);
    }
    node *head = NULL;
    node *temp = NULL;

    while(!st.empty()){
        node *newnode = new node();
        newnode->data = st.top();
        st.pop();
        newnode->next = NULL;

        if(head == NULL){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
    }

    //Print Linked List.
    cout<<"Linked List"<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}