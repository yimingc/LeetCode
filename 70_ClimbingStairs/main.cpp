#include <iostream>

using namespace std;

class Solution
{
public:
    int climbStairs1(int n)
    {
        if (n < 0) return 0;
        if (n <= 2) return n;
        return (climbStairs(n-1)+climbStairs(n-2));
    }
    int climbStairs(int n)
    {
        if (n < 0) return 0;
        if (n <= 2) return n;

        int ret[n+1] = {0, 1, 2};
        for(int i=3; i <= n; ++i)
        {
            ret[i] = ret[i-1] + ret[i-2];
        }
        return ret[n];
    }
};

int main()
{
    Solution sln;
    int n = 3;
    cout << "Test1: n=" << n << ", ret=" << sln.climbStairs(n) << endl;
    return 0;
}
