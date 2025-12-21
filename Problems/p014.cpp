#include<iostream>
using namespace std;

int main(){

  char akr;
  cin>>akr;
  if(akr=='A' || akr=='E' || akr=='I' || akr=='O' || akr=='U'){
    cout<<"Vowel"<<endl;
  }
  else if(akr=='a' || akr=='e' || akr=='i' || akr=='o' || akr=='u'){
    cout<<"Vowel"<<endl;
  }
  else{
    cout<<"Consonant"<<endl;
  }
    return 0;
}