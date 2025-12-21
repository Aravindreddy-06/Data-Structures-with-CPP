/*
Sort the Queue in Ascending Order.

input: 3 1 4 5 2 
output: 1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int>q;

    int n;
    cout<<"How many Elements: "<<endl;
    cin>>n;

    cout<<"Enter the Elements: "<<endl;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }

    vector<int>v;
    while(!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    sort(v.begin(), v.end());

    for(int x : v){
        q.push(x);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}

