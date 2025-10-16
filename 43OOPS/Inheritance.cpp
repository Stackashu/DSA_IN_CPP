#include <iostream>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    int getAge() {
        return this->age;
    }
    void setWeight(int w) {
        this->weight = w;
    }
};

class Male : public Human {
    public:
    string color;

    void sleep() {
        cout << "Male is sleeping" << endl;
    }
};

int main() {
    Male m1;
    // Optionally set some values for demonstration
    m1.age = 25;
    m1.weight = 70;
    m1.height = 180;
    m1.color = "Fair";

    cout << m1.age << endl;
    cout << m1.weight << endl;
    cout << m1.color << endl;
    cout << m1.getAge() << endl;
    m1.sleep();
    return 0;
}