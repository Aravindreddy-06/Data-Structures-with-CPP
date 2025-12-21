/*
https://www.hackerrank.com/contests/practicecontest1-1/challenges/py-the-captains-room/problem

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    // code here

    int k;
    cout<<"Enter the K value: "<<endl;
    cin>>k;

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector <int> arr(n);        //n

    cout<<"Enter the values of the array: "<<endl;
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];                //n
    }

    int maxx = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        maxx = max(maxx, arr[i]);   //n
    }

    vector<int> freq(maxx+1, 0);    //O(maxx)
    
    for(int i=0; i<n; i++){
        freq[arr[i]]++;             //n
    }
    for(int i=0; i<freq.size(); i++){   //Runs maxx+1 times 
        if(freq[i] == 1){           //n    
            cout<<i<<endl;          //1
            break;                  //1
        }
    }
    return 0;                       //1
}

/*
Time Complexity of this code is: 

    O(n + maxx)
*/