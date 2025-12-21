/*

1 2 3 4 5
2 3 4 5
3 4 5 
4 5 
5

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<(j+i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}