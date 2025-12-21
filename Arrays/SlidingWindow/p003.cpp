/*
https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;      //1
    cout << "Enter size of array: ";        //1
    cin >> n;                           //1

    vector<int> arr(n);             //1
    cout << "Enter elements: ";     //1
    for (int i = 0; i < n; i++){
        cin >> arr[i];              //n
    }

    int k;                  //1
    cout<<"Enter the K value: "<<endl;    //1
    cin>>k;                             //1

    vector<int> newArr;     //1
    int i=0, j = k-1;       //1
    while(j<n){
        bool found = false;         //n
        for(int x = i; x<=j; x++){          //k (Because here j is k)
            if(arr[x] < 0){
                newArr.push_back(arr[x]);       //n * k
                found = true;                   //1
                break;                          //1
            }
        }
        if(found == false){
            newArr.push_back(0);                //1
        }
        i++;
        j++;
    }    
    for(int i = 0; i<newArr.size(); i++){
        cout<<newArr[i]<<" ";                   //n
    }
    return 0;
}

/*
Total Time Complexity of this code is :
    -> O(n * k)
*/