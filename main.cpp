#include "AutocompletionWord.h"


int main()
{
    do
    {
        struct TrieNode* root = getNode();
        insert(root, "the");
        insert(root, "a");
        insert(root, "to");
        insert(root, "and");
        insert(root, "in");
        insert(root, "cat");
        insert(root, "dog");
        insert(root, "dad");
        insert(root, "red");
        insert(root, "blue");
        insert(root, "green");
        insert(root, "yellow");
        insert(root, "white");
        insert(root, "black");
        insert(root, "brown");
        insert(root, "orange");
        insert(root, "pink");
        insert(root, "purple");
        insert(root, "brown");
        insert(root, "orange");
        insert(root, "pink");
        insert(root, "purple");
        insert(root, "brown");

        string word;
        cout << "Enter part of word to search: " << endl;
        cin >> word;
        cout << "Suggestions for " << word << " are: " << endl;
        printAutoSuggestions(root, word);
        cout << endl;
    } while (true);
}
