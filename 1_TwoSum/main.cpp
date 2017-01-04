#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> ret;
        unordered_map<int, int> table;
        for (int i = 0; i < nums.size(); ++i )
        {
            const auto it = table.find(target - nums[i]);
            if ( it != table.end() )
            {
                ret.push_back( it->second );    // the second value of a pair
                ret.push_back( i );
                return ret;
            }
            //table.insert( pair<int, int>(nums[i], i) );
            table[nums[i]] = i;
        }
        return ret;
    }
};

int main()
{
    Solution sln;
    cout << "-------1. Two Sum-------" << endl;
    int temp1[] = {2, 7, 11, 15};
    vector<int> nums1(temp1, temp1 + sizeof(temp1) / sizeof(int));
    cout << "Test 1: Given nums = [2, 7, 11, 15], target = 9, "
            "should return [0 ,1]. Result: ["
            << sln.twoSum(nums1, 9)[0] <<", "
            << sln.twoSum(nums1, 9)[1] <<"]." << endl;
    int temp2[] = {3,2,4};
    vector<int> nums2(temp2, temp2 + sizeof(temp2) / sizeof(int));
    cout << "Test 2: Given nums = [3,2,4], target = 6, "
            "should return [1, 2]. Result: ["
            << sln.twoSum(nums2, 6)[0] <<", "
            << sln.twoSum(nums2, 6)[1] <<"]." << endl;
    return 0;
}
