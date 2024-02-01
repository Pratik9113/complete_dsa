#include <iostream>
using namespace std;
class Trienode
{
public:
    char data;
    Trienode *children[26];
    bool isTerminal = false;
    Trienode(char ch)
    {
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};