#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int magicalString(int n) {
        string S = "122";
        int i = 2;
        while (S.size() < n)
            S += string( S[i++] - '0', S.back()^3 );    // (number, char), S.back()^3 gives 2 for 1, and 1 for 2
        cout << S << endl;
        cout << char(int('2')^3) << endl;
        return count(S.begin(), S.begin() + n, '1');
    }
};

int main()
{
    Solution sln;
    sln.magicalString(6);
    return 0;
}
