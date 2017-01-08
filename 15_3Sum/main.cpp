#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        std::sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            if ( i==0 || (i>0 && nums[i] != nums[i-1]) )
            {
                // bi-directional sweep 2sum
                int l = i+1, h = nums.size()-1, sum = -nums[i];
                while( l < h )
                {
                    if (nums[l]+nums[h] == sum)
                    {
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        ret.push_back(temp);
                        while( l<h && nums[l]==nums[l+1] ) ++l;
                        while( l<h && nums[h]==nums[h-1] ) --h;
                        ++l; --h;
                    }
                    else if ( nums[l]+nums[h] < sum ) ++l;
                    else --h;
                }
            }
        }

        return ret;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
