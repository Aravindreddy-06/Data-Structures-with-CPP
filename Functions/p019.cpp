//Function to check Vowel or Consonant.

#include<iostream>
using namespace std;

string VowelorConst(){
    char n;
    cin>>n;
    if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
        return "Vowel";
    }else if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
        return "Vowel";
    }
    else{
        return "Consonant";
    }
}

int main(){

    string result = VowelorConst();
    cout<<"The char is: "<<result<<endl;

    return 0;
}