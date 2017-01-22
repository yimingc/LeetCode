#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ret;
        vector<vector<int>> bucket(nums.size()+1, vector<int>());    // possible frequency: 0, 1, ..., nums.size()
        unordered_map<int, int> freq;
        for (auto a : nums) ++freq[a];
        for (auto e : freq) bucket[e.second].push_back(e.first);
        for (int i = nums.size(); i > 0 && ret.size() < k; --i)    // do not care i==0 since 0 freq does not make sense
            if ( bucket[i].size() )
                for (auto e : bucket[i])
                    ret.push_back(e);
        return ret;
    }
};

int main()
{
    Solution sln;
    vector<int> test = { 1,1,1,2,2,3 };
    int k = 2;
    sln.topKFrequent(test, k);
    return 0;
}
