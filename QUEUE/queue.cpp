#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Queue size: " << q.size() << endl;
    cout << "Element at front: " << q.front() << endl;
    cout << "Element at end: " << q.back() << endl;
    cout << "Is queue empty? " << boolalpha << q.empty() << endl;
    
    q.emplace(6);
    cout << "Emplaced 6 at end." << endl;
    cout << "Element at end: " << q.back() << endl;
}