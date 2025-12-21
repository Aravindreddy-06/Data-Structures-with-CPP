//Determine the average of all elements of the sequence ending with the number 0.

#include<iostream>
using namespace std;

int main(){
    int number;
    cin>>number;
    float avg;
    int sum = 0;
    int count = 0;

    while(number!=0){
        sum+=number;
        count++;
        cin>>number;
        avg = float(sum/count);        
    }
    cout<<sum<<endl;
    cout<<count<<endl;
    cout<<float(avg)<<endl;
    return 0;
}