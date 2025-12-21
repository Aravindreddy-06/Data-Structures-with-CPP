#include<bits/stdc++.h>
using namespace std;

void array_sum(int arr[], int i, int sum){
    if(i < 0){
        cout << "Sum of the Array: " << sum << endl;
        return;
    }
    array_sum(arr, i - 1, sum + arr[i]);
}

int main(){
    int n;
    cout << "Enter the size of the Array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the Array Elements: " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    array_sum(arr, n - 1, 0);
    return 0;
}
