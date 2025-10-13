#include <iostream>
#include <string>
using namespace std;
  
char getMaximumCharacter(string s ){
    char arr[26] = {0};
    for(int i = 0; i<s.length();i++){
        char ch = s[i];
        int  index = ch - 'a';
        arr[index]++;
    }

    int max = -1 , ans = 0;

    for(int i = 0;i<26;i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }
    char ch = 'a' + ans;
    return ch;
}

int main(){
string s = "test";
cout<<getMaximumCharacter(s)<<endl;
}