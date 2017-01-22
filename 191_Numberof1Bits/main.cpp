#include <iostream>

using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ret = 0;
        while ( n )
        {
            ret += n & 1;
            n = n>>1;
        }
        return ret;
    }
};

int main()
{
    Solution sln;
    uint32_t n = 11;
    cout << "Test1: n=" << n << ", ret=" << sln.hammingWeight(n) << endl;
    return 0;
}
