/*
Implementing the Queue Using Array.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Queue Size: "<<endl;
    cin>>n;

    int q[n];
    int front = -1, rear = -1;

    cout<<"Enqueue: "<<endl;
    for(int i=0; i<n; i++){
        int val;
        cin>>val;

        if(rear == n-1){
            cout<<"queue OverFlow!"<<endl;
        }
        if(front == -1) front=0;
            rear++;
            q[rear] = val;
    }

    cout<<"Front Element: "<<endl;
    if(front != -1){
        cout<<q[front]<<endl;
    }

    cout<<"Rear Element: "<<endl;
    if(rear != -1){
        cout<<q[rear]<<endl;
    }

    cout<<"Is Queue Empty ?"<<endl;
    if(front == -1 || front>rear){
        cout<<"Queue is Empty!"<<endl;
    }else{
        cout<<"Queue is Not Empty"<<endl;
    }

    cout<<"Is Queue Full ?"<<endl;
    if(rear == n-1){
        cout<<"Queue is Full"<<endl;
    }else{
        cout<<"Queue is Not FUll"<<endl;
    }

    cout<<"DeQueue Elements: "<<endl;
    int d;
    cout<<"How many Elements You want to delete? "<<endl;
    cin>>d;
    for(int i=1; i<=d; i++){
        if(front == -1 || front>rear){
            cout<<"No more Elements to delete!"<<endl;
            break;
        }
        cout<<q[front]<<"  Deleted"<<endl;
        front++;
    }

    cout<<"Display Remaining Elements: "<<endl;
    if(front == -1 || front > rear){
        cout<<"Queue is Empty! "<<endl;
    }else{
        for(int i=front; i<=rear; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }

    int count = 0;
    cout<<"Count of the Remaining Elements: "<<endl;
    for(int i=front; i<=rear; i++){
        count++;
    }
    cout<<count<<endl;
    return 0;
}
