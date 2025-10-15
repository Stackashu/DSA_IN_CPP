#include <iostream>
#include <vector>
using namespace std;

void solve(vector<string> &ans, string output, int i, string mapping[], string digits)
{

    if (i >= digits.length())
    {
        cout <<"string added :"<<output<<endl;
        ans.push_back(output);
        return;
    }

    int number = digits[i] - '0';
    string alph = mapping[number];

    for (int j = 0; j < alph.length(); j++)
    {
        output.push_back(alph[j]);
        cout<<"output in iteration : "<<output<<endl;
        cout << "iteration: " << j << alph[j] << endl;
        solve(ans, output, i + 1, mapping, digits);
        
        cout << "removing string " << j << alph[j] << endl;
        output.pop_back();
    }
}
int main()
{
    string digits = "23";
    int index = 0;
    vector<string> ans;
    string output = "";
    string mappings[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(ans, output, index, mappings, digits);
    for (auto st : ans)
    {
        cout << st << " ";
    }
    cout << endl;
}