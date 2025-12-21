#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
    cin>>T;
    while(T--){
        int N,X,subc;
        cin>>N>>X;
        subc = ((N+5)/6);
        cout<<subc*X<<endl;
    }
    return 0;

}
