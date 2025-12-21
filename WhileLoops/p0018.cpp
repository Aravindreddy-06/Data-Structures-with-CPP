//

#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int maxi = 0;
    int n;              //1 
    cin>>n;
    while(n!=0){        //true
        if(n>maxi){     //maxi = 0/ n = 1(1>0)? yes;
            maxi = n;   //maxi = 1
            count = 1;  //count = 1;
        }
        cin>>n;         //n = 1
        if(n == maxi){  //1 == 1(yes)
            count++;    //count = 2
        }
    }
    cout<<count<<endl;
    return 0;
}