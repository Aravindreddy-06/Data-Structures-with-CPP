/*
Given a sequence of integer numbers ending with the number 0. 
Determine the length of the widest fragment where all the elements are equal to each other.

*/

#include <iostream>
using namespace std;

int main() {
    int num,prev,curLen = 1,maxLen = 1;
    cin>>prev;
    if(prev == 0){
        cout<<0<<endl;
        return 0;
    }
    while(num!=0){
        cin>>num;
        if(prev == num){
            curLen++;
        }
        else{
            if(curLen>maxLen){
                maxLen = curLen;
                
            }
            curLen = 1;
        }
        prev = num;
    }
    if(curLen>maxLen){
        maxLen = curLen;
    }
    cout<<maxLen<<endl;
    return 0;
}
