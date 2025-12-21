//Printing the Each word in the different line in a sentence.

#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: " << endl;
    getline(cin, str);

    cout << "Words in the sentence are:" << endl;

    string word = "";
    for(int i=0; i<str.length(); i++){
        if(str[i]!= ' '){
            word = word + str[i];
        }
        else{            
            cout<<word<<endl;
            word = "";
        }
        
    }
    cout<<word<<endl;
    return 0;
}
