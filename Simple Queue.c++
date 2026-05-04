#include <iostream>
using namespace std;

int main() {
    int q[5];
    int front=0, rear=0;

    // enqueue
    q[rear++] = 10;
    q[rear++] = 20;

    // dequeue
    cout << q[front++] << endl;
    cout << q[front++] << endl;
}
