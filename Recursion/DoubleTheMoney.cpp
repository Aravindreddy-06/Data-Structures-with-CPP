/*
Statement: 1st Day you have "1rs" and everyday till n days your money will be doubled. 

input: 5days
output: 16rs.
Explanation: day1:1rs, day2:2rs, day3:4rs, day4:8rs, day5:16rs. 
*/

#include<iostream>
using namespace std;

int double_money(int num){
    //Base Case.
    if(num == 1){
        return 1; //Because day 1 you have only 1rs.
    }
    //Recursive Case.
   return 2 * double_money(num-1);
}

int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    cout<<double_money(n)<<endl;
    return 0;
}