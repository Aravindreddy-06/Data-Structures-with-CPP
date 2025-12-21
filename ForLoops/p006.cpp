//Sum of the cubes of the N numbers.

#include<iostream>
using namespace std;
int main(){
    int i = 1;
    int cubesum = 0;
    int x;
    cin>>x;
    for(i;i<=x;i++){
        cubesum = cubesum + (i*i*i);
    }
    cout<<cubesum<<endl;
    return 0;
}
