//Sum of the squares of the N numbers.

#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int squaresum = 0;
    int x;
    cin>>x;
    for(i;i<=x;i++){
        squaresum = squaresum + (i*i);
    }
    cout<<squaresum<<endl;
    return 0;
}
