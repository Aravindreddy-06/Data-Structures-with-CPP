/*
Implementing the Queue Using Stack.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>s1, s2;

    int n;
    cout<<"How many Elements do You want to Enqueue: "<<endl;
    cin>>n;

    int val;
    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>val;
        s1.push(val);
    }

    //push the s1 elements into s2.Because to print the Queue Elements in corect order.
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }

    stack<int>temp = s2;
    //now print the Elements from the Stack Without loosing s2 Data using temp;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;

    //Dequeue
    int d;
    cout<<"How many Elements you want to Delete?"<<endl;
    cin>>d;

    cout<<"Deleted Elements: "<<endl;
    for(int i=0; i<d; i++){
        if(s2.empty()){
            cout<<"Queue is Empty"<<endl;
        }else{
            cout<<"Deleted "<<s2.top()<<" ";
            s2.pop();
        }
    }
    cout<<endl;
    
    //print the Remaining Elements after Deletion.
    while(!s2.empty()){
        cout<<s2.top()<<" ";
        s2.pop();
    }
    cout<<endl;
    return 0;
}