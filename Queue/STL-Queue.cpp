#include <iostream>
#include <queue>   
using namespace std;

int main() {

    queue<int> q;   // create a queue of integers

    // ---- Enqueue (push) ----
    q.push(10);
    q.push(20);
    q.push(30);

    // ---- Front element ----
    cout << "Front: " << q.front() << endl;   

    // ---- Rear element ----
    cout << "Rear: " << q.back() << endl;    

    // ---- Size of queue ----
    cout << "Size: " << q.size() << endl;    

    // ---- Dequeue (pop) ----
    q.pop();    

    cout << "Front after pop: " << q.front() << endl;  

    // ---- Check if empty ----
    if (q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    // ---- Display all elements ----
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();             
    }

    return 0;
}
