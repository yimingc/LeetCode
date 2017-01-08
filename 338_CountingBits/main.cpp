#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> countBits(int num)
    {
        vector<int> ret(num+1, 0);
        for (int i = 1; i<=num; ++i)
        {
            ret[i] = ret[i>>1] + (i&1);
        }
        return ret;
    }
};

int main()
{
    Solution sln;
    int test1 = 5;
    cout << "Test 1: " << test1 << endl;
    cout << "Result 1: ";
    const auto result1 = sln.countBits(test1);
    for (int i = 0; i < result1.size(); ++i)
    {
        cout << result1[i]<<", ";
    }
    return 0;
}
