/*
Address:   1000   1004   1008   1012   1016
           +-----+-----+-----+-----+-----+
Values:    | 10  | 20  | 30  | 40  | 50  |
           +-----+-----+-----+-----+-----+
Index:       0     1     2     3     4

Why addresses increase by 4?
Because int = 4 bytes

Accessing Array Elements through Pointer.

Using pointer:
cout << *p;       // 10
cout << *(p + 1); // 20
cout << *(p + 2); // 30

Same as array:
cout << arr[0];  // 10
cout << arr[1];  // 20
cout << arr[2];  // 30

Both ways give the same output.

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[5] = {1,2,3,4,5};
    
    int *p = arr;
    for(int i=0; i<5; i++){
        cout<<*p<<" ";
        p++;
    }
    return 0;
}