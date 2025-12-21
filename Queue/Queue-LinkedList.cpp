/*
Implementing the Queue Using LinkedList
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

int main(){
    node *front = NULL;
    node *rear = NULL;

    int n;
    cout<<"How Many Elements yow want to insert"<<endl;
    cin>>n;

    cout<<"Enter the Elements: "<<endl;
    for(int i=1; i<=n; i++){
        int val;
        cin>>val;

        node *newnode = new node();
        newnode->data = val;
        newnode->next = NULL;

        if(front == NULL){
            front = newnode;
            rear = newnode;
        }else{
            rear->next = newnode;
            rear = newnode;
        }
    }
    //Enqueue
    node *temp = front;
    cout<<"Queue Elements: "<<endl;
    if(front == NULL){
        cout<<"Queue is Empty! "<<endl;
        return 0;
    }else{
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;

    //Front Element
    if(front != NULL){
        cout<<"Front Element is: "<<front->data<<endl;
    }

    //Rear Element
    if(rear != NULL){
        cout<<"Rear Element is: "<<rear->data<<endl;
    }

    //isEmpty
    if(front == NULL){
        cout<<"Queue is Empty!"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    //Dequeue
    int d;
    cout<<"How Many Elements to Delete: "<<endl;
    cin>>d;

    for(int i=1; i<=d; i++){
        temp = front;
        cout<<"Deleted "<<temp->data<<endl;
        front = front->next;
        delete temp;

        
        if(front == NULL){
            rear = NULL;
        }
    }

    //Print the Remaining Elements after Deletion.
    cout<<"Remaining Elements after Deletion"<<endl;
    temp = front;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return 0;
}