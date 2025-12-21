#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    int circumference;
    cin>>a>>b>>c;

    if(((a+b)>=c) && ((a+c)>=b) && ((b+c)>=a)){
        circumference = a+b+c;
        cout<<"Circumference of the Triangle is:"<<circumference<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}