//X power Y using for loop.


#include<iostream>
using namespace std;

int main(){
    int result = 1;
    int x,y;
    cin>>x>>y;
    for(int i = 0; i<y; i++){  //Run the loop y times and multiply the x and store the result.
        result = result*x;
    }
    cout<<result<<endl;        //You can get answer.
    return 0;
}