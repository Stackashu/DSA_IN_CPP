#include<iostream>
using namespace std;


class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d){
        data = d;
        for(int i = 0 ; i < 26 ; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    void insertUtil(TrieNode* root, string word){

         //base case
         if(word.length() == 0){
            root->isTerminal = true;
            return;
         }
          int index = word[0] - 'A';
          TrieNode* child;

          if(root->children[index] != NULL){
            child = root->children[index];
          }
          else{
            child = new TrieNode(word[0]);
            root->children[index] = child;
          }
    }
    void insertWord(string word){
        insertUtil(root, word);
    }

;}

int main(){

}