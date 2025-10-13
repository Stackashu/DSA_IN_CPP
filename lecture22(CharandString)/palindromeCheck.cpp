#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

bool palindromeCheck(char name[]){
int s = 0;
int e = strlen(name)-1;

while(s<e){
    while(s<e && !isalpha(name[s])){
        s++;
    }
    while(s<e && !isalpha(name[e])){
        e--;
    }
    if(tolower(name[s])!=tolower(name[e])){
        return false;
    }
}
return true;
}

int main(){
    char name[20] = {'a','s','h','i','s','h','\0'};
    if(palindromeCheck(name)){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
   
}