#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int x,a,b,Easy,Hard;
	    cin>>x>>a>>b;
	    Easy = a*1;
	    Hard = b*2;
	    if((Easy+Hard)>=x){
	        cout<<"Qualify"<<endl;
	    }
	    else{
	        cout<<"NotQualify"<<endl;
	    }
	}
	return 0;

}
