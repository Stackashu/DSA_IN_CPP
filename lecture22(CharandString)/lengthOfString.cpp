#include<iostream>
using namespace std;

int length(char name[]){
int count = 0;
    for(int i = 0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20] = {'a','s','h','i','s','h','\0'};

    cout<<"Your name is :"<<name<<endl;
    cout<<"Length of name is :"<<length(name)<<endl;
    
}