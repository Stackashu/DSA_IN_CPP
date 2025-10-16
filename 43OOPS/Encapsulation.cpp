#include <iostream>
using namespace std;

class Hero{

    private:
    int age;
    int height;

    public:
    int getAge(){
        return this->age;
    }

};

int main(){

    Hero h1;
    cout<<"Age is :"<<h1.getAge()<<endl;
    return 0;
    
}