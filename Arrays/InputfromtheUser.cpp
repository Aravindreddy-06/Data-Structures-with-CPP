#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int arr[n];

    cout<<"Enter the Elements in an array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array Elements are: "<<endl;
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
    return 0;
}
