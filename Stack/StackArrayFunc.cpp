#include<bits/stdc++.h>
using namespace std;

int stackArr[100];
int top = -1;

void push(int x){       //Pushing the Element into the stack
    if(top == 99){
        cout<<"Stack Overflow!"<<endl;
        return;
    }
    top++;              //Moving the top from -1 to 0,1,2,3,4,5....
    stackArr[top] = x;  //storing the pushed element.
}

int pop(){
    if(top == -1){
        cout<<"Stack Underflow!"<<endl;
        return -1;
    }
    int item = stackArr[top];
    top--;
    return item;
}

int peek(){
    if(top == -1){
        cout<<"Stack is Empty."<<endl;
        return -1;
    }
    return stackArr[top];
}

bool isEmpty(){
    return (top == -1);
}

void display(){
    if(top == -1){
        cout<<"Stack is empty!"<<endl;
        return;
    }
    cout<<"Stack Elements top to bottom."<<endl;
    for(int i = top; i>=0; i--){
        cout<<stackArr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n,x;
    cout<<"How many elements you want to push?"<<endl;
    cin>>n;

    cout<<"Enter the Elements in the stack: "<<endl;
    for(int i=0; i<n; i++){
        cin>>x;
        push(x);
    }

    cout<<"Top Element: "<<peek()<<endl;

    display();

    cout<<"popped: "<<pop()<<endl;

    display();

    return 0;
}
