#include <iostream>

using namespace std;
class Solution
{
public:
    string reverseVowels(string s)
    {
        int lo = 0, hi = s.size()-1;
        int dict[128] = {0};
        string vowels = "aeiouAEIOU";
        for (auto l : vowels)
            dict[l] = 1;
        while (lo < hi)
        {
            while (dict)
        }
        return s;
    }
};

int main()
{
    Solution sln;
    string test1 = "hello", test2 = "leetcode";
    cout << "Test 1: "<<test1<<", result: "<< sln.reverseVowels(test1) << endl;
    cout << "Test 2: "<<test2<<", result: "<< sln.reverseVowels(test2) << endl;
    return 0;
}
