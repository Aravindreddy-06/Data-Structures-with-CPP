/*    Copied from ChatGpt.(Pascal Triangle)
    1 
   1 1 
  1 2 1 
 1 3 3 1 
1 4 6 4 1 

*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // number of rows

    for (int i = 0; i < n; i++) {
        // Print leading spaces for triangle shape
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        int val = 1;  // first value in every row is 1
        for (int k = 0; k <= i; k++) {
            cout << val << " ";
            val = val * (i - k) / (k + 1);  // formula for next value
        }

        cout << endl;
    }

    return 0;
}
