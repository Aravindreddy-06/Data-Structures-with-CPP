/*
Print all the subsequences of the array

For the Video Reference take a look at the "take u forward" YT channel recursion playlist(Lesson 6)
*/

#include<bits/stdc++.h>
using namespace std;

void sub_sequences(int index, vector<int> &v, int arr[],int n){
    if(index == n){
        for(auto x : v){
            cout<<x<<" ";
        }
        if(v.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[index]); //Lets take [1,2,3] as an array. push the arr[0] = 1 to the vector array.then vector array becomes [1]
    sub_sequences(index+1, v, arr, n); //and call the function again now push the arr[1] = 2. now vector array becomes [1,2]. Call function again and push arr[2] = 3 now array becomes [1,2,3].
    //now condition matches the base case index == n(3).so print the [1,2,3] sub sequence and return.

    v.pop_back(); //While coming back from the last, remove last element from the vector array. arr[2] = 3 array becomes [1,2].
    sub_sequences(index+1, v, arr, n); //call the function index == n. so print the [1,2].remove 2 again call the function, print[1].
}

int main(){
    int n;
    cout<<"Enter the Array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> v;
    sub_sequences(0, v, arr, n);
    return 0;
}

/*
Time Complexity: 
    O(2ⁿ × n)

For each element, you have 2 choices:
take it
not take it
Total subsequences = 2ⁿ
Printing each subsequence takes O(n) in the worst case
➡ Time = O(2ⁿ × n)

Space Complexity:
    O(n)
*/