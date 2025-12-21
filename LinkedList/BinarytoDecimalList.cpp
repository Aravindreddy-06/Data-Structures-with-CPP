/*
https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/?envType=problem-list-v2&envId=linked-list

Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.
The most significant bit is at the head of the linked list.

Example 1:

Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
*/

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head = NULL;
    struct node *temp = NULL;

    int n;
    cout<<"How many Nodes you Want? "<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        int val;
        cout<<"Enter the Data for the Node "<< i <<":"<<endl;
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
    temp = head;
    int ans = 0;
    while(temp != NULL){
        ans = (ans<<1) | temp->data;
        temp = temp->link;
    }
    cout<<ans<<endl;
    return 0;
}