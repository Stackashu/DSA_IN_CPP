#include<iostream>
using namespace std;

void reverseString(char name[],int len){
    int i = 0;
    int j = len-1;
    while(i<j){
        char temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }
}
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
    int len = length(name);
    cout<<"Length of name is :"<<length(name)<<endl;
    reverseString(name,len);
    cout<<"Reversed name is :" <<name<<endl;
  
    
}