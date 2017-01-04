#include <iostream>

using namespace std;

class Solution
{
public:
    int calculate(string s)
    {
        int ret;
        for (int i = 0; i < s.size(); ++i)
        {

        }
        return ret;
    }
};

int main()
{
    Solution sln;
    string test1 = "3+2*2";
    cout << "Test string 1: "+test1+". Result: "<<sln.calculate(test1)<< endl;
    return 0;
}
