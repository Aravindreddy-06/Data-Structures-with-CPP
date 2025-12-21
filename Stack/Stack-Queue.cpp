/*
Implement the stack using Queue.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;

    int n;
    cout<<"How many Elements do you want ?"<<endl;
    cin>>n;

    int x;
    for(int i=0; i<n; i++){
        cin>>x;
        q.push(x);

        //Rotating the Queue to reverse the Elements.
        
        int size = q.size();
        for(int j=1; j<size; j++){
            q.push(q.front());
            q.pop();
        }
    }
    //Display Stack
    queue<int>temp = q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;

    //pop operation
    int d;
    cout<<"How many want to Delete? "<<endl;
    cin>>d;

    for(int i=0; i<d; i++){
        cout<<"Deleted "<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    cout<<"Remaining Stack: "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}
