//Finding the sum of two numbers.
//Finding the average of three numbers.

#include<iostream>
using namespace std;

int sumOfTwo(int a, int b){
    int sum = a+b;
    return sum;
}

int average(int a, int b, int c){
    int avg = ((a+b+c)/3);
    return avg;
}

int main(){
    int sumResult = sumOfTwo(5,3);
    int AverageResult = average(3,3,3);
    cout<<"Sum is: "<<sumResult<<endl;
    cout<<"Avergae is: "<<AverageResult<<endl;
    return 0;
}