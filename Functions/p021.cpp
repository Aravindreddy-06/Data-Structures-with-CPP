//Area of a circle.using

//cout<<fixed<<setprecision(2) <- Printing the upto 2 decimal values.

#include<bits/stdc++.h>
using namespace std;

float AreaOfCircle(int r){
    int Area = (3.141 * r * r);
    return Area;
}

int main(){

    float result = AreaOfCircle(5);
    cout<<fixed<<setprecision(2);
    cout<<"Area Of a Circle is:"<<result<<endl;
    return 0;
}