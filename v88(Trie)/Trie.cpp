#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char d)
    {
        data = d;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }

    bool isEmpty(TrieNode *child)
    {

        for (int i = 0; i < 26; i++)
        {
            if (child->children[i] != NULL)
                return false
        }
        return true;
    }
    void insertUtil(TrieNode *root, string word)
    {

        // base case
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        return searchUtil(child, word.substr(1));
    }
    bool search(string word)
    {
        return searchUtil(root, word);
    }
    bool deleteWord(TrieNode *root, String &word, int depth)
    {
        if (!root)
            return false;

        if (depth == word.size())
        {
            if (!root->isTerminal)
            {
                return false;
            }

            root->isTerminal = false;

            return isEmpty(root);
        }

        int idx = word[depth] - 'A';
        TrieNode *child = root->children[idx];
        if (!child)
            return false;

        bool shouldDeleteChild = deleteWord(child, word, depth + 1);

        if (shouldDeleteChild)
        {
            delete child;
            root->children[idx] = NULL;

            return isEmpty(root) && !root->isTerminal;
        }

        return false;
    }

    bool remove(string word)
    {
        return deleteWord(root, word, 0);
    }
};

int main()
{

    Trie *t = new Trie();
    t->insertWord("HELLO");
}