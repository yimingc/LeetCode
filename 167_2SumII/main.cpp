#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // bi-directional sweep sum
        vector<int> ret;
        int lo = 0, hi = nums.size()-1;
        while(lo < hi)
        {
            if (nums[lo] + nums[hi] == target)
            {
                ret.push_back(lo+1);
                ret.push_back(hi+1);
                return ret;
            }
            else if (nums[lo] + nums[hi] < target) ++lo;
            else --hi;
        }
        return ret;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
