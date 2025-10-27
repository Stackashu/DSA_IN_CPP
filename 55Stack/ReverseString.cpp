#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack <char> s;
    string str = "ashish";
    string ans = "";

    for(int i = 0 ; i < str.size() ; i++){
        s.push(str[i]);
    }
   
    while (!s.empty())
    {
        ans = ans + s.top();
        s.pop();
    }

    cout<<ans<<endl;
    
}