#include <iostream>
// #include <stack>
using namespace std;

// There are some problems in the below implementation:

// 1. 'int *arr = new int[size];' is not correct because 'size' is not initialized yet while defining it.
// 2. In the constructor, you assign 'size', but the array should be allocated there, not at member initialization.
// 3. The default value assignments 'int top = -1;' and 'int *arr = new int[size];' are not good practice, and 'arr' leads to undefined behavior.
// 4. 'Stack s1 = new Stack(10);' in main is wrong, it should be 'Stack s1(10);' (you don't need 'new' for stack-allocated object).
// 5. Function 'empty' should return bool, but currently void, also 'top()' overlaps with member variable 'top'.

class Stack{
public:
    int size;
    int *arr;
    int top;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
        cout<<"stack created "<<endl ;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int data){
        if(top >= size - 1){
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = data;
        cout<< "added"<<endl;
        return;
    }
    
    void pop(){
        if(top < 0){
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
        cout<< "popped"<<endl;
        return;
    }
    
    bool empty(){
        if(top >= 0){
            cout<< "array is not empty"<<endl;
            return false;
        }else {
            cout<< "array is empty"<<endl;
            return true;
        }
    }
    void displayTop(){ // changed function name because of conflict with variable 'top'
        if(top < 0){
            cout << "Stack is empty!" << endl;
            return;
        }
        cout<<arr[top]<<endl;
        return;
    }
};
int main(){
    Stack s1(10); // corrected object creation
    s1.push(22);
    s1.push(40);
    s1.push(40);
    s1.push(40);
    s1.push(40);
    s1.push(40);
    s1.push(40);
    s1.push(40);
    s1.displayTop();
    s1.empty();
    s1.pop();
    s1.displayTop();
    // stack<int> s;

    // s.push(2);
    // s.push(3);
    // s.pop();
    // cout<< s.top()<< endl;
    // s.pop();
    // if(s.empty()){
    //   cout<<"Stack is empty";
    // }else cout<<"stack is not empty ";

    // Example use of our Stack class (uncomment to test):
    // s1.push(2);
    // s1.push(3);
    // s1.pop();
    // s1.displayTop();
    // s1.pop();
    // if (s1.empty()) {
    //     cout << "Stack is empty";
    // } else {
    //     cout << "stack is not empty";
    // }
} 