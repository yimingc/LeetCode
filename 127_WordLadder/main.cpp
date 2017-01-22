#include <iostream>
#include <unordered_set>
#include <queue>

using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
        queue<string> toVisit;                     // queue for BFS
        int dist = 2;                              // include begin and end
        wordList.insert(endWord);                  // insert endWord as destination
        addNextWords(beginWord, wordList, toVisit);    // start from beginWord
        while (!toVisit.empty())
        {
            int num = toVisit.size();
            for (int i = 0; i < num; ++i)
            {
                string word = toVisit.front();
                toVisit.pop();
                if (word==endWord) return dist;    // if reach end
                addNextWords(word, wordList, toVisit);
            }
            ++dist;
        }
        return 0;
    }
private:
    // erase the input word, and push the adjacent words to queue
    void addNextWords(string word, unordered_set<string>& wordList, queue<string>& toVisit)
    {
        wordList.erase(word);    // erase to mark as visited
        for ( int p = 0; p < word.size(); ++p)
        {
            char letter = word[p];
            for (int i = 0; i < 26; ++i)
            {
                word[p] = 'a'+i;
                if (wordList.find(word)!=wordList.end())
                {
                    toVisit.push(word);
                    wordList.erase(word);
                }
            }
            word[p] = letter;
        }
    }
};

int main()
{
    unordered_set<string> wordList;
    wordList.insert("hot");
    wordList.insert("dog");
    wordList.insert("dot");
    Solution sln;
    cout << sln.ladderLength("hot", "dog", wordList) << endl;
    return 0;
}
