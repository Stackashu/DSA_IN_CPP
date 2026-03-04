#include<iostream>
#include<queue>
#include<vector>
#include<functional> // for greater<int> which is used to create a min heap
using namespace std;


int  main(){
    priority_queue<int, vector<int>, greater<int>> minHeap; // this is how we create a min heap in c++
    priority_queue<int> maxHeap; // this is how we create a max heap in c++
    return 0;
}