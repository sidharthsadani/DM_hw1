// Header file for Trie class

//Header guards

#ifndef TRIE_H
#define TRIE_H

#include<string>
#include<vector>
#include<map>

class Trie{
  public:
    std::string my_name;
    int path_count;
    Trie *next_trie;
    std::map<std::string, Trie*> trie_Map;
    // PUBLIC FUNCTIONS
    // Access Functions
    int getPathCount();
    std::string getName();
    // Insert Functinos
    void insertTrie(Trie);
    void insertTrie(std::string, int);
    Trie* createTrie(std::string, int);

    // Constructor
    Trie(std::string s, int p);
};

#endif
