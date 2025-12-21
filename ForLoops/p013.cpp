//Check if number is composite or not.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

     if (n <= 1) {
        cout << "Neither prime nor composite" << endl;
        return 0;
    }
    
    bool iscomposite = false;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            iscomposite = true;
            break;
        }
    }
    if(iscomposite){
        cout<<"Composite number"<<endl;
    }
    else{
        cout<<"Not Composite Number"<<endl;
    }
}