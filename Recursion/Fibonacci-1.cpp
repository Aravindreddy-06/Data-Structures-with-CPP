/*
Print the Fibonacci Series of the Number using Recursion.
input: 6
ouput: 8
Explanation: 0 1 1 2 3 5 8 13 21 34 55 89 ......
The Fibonacci sequence of the 6th Index is 8.
F(n) = F(n-1) + F(n-2).
*/

#include<bits/stdc++.h>
using namespace std;

int fib(int num){
    if(num<=1){
        return num;
    }
    return fib(num-1) + fib(num-2);
}

int main(){
    int n;
    cout<<"Enter the Number: "<<endl;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}

/*
Time Complexity: 
    O(2^n) Because Each Cell calls another two cells.

    fib(5)
├── fib(4)
│   ├── fib(3)
│   └── fib(2)
└── fib(3)
    ├── fib(2)
    └── fib(1)


Space Complexity:
    O(n)
*/