#include <iostream>
#include <vector>

using namespace std;

int partit(vector<int>& nums, int left, int right)
{
    cout << left << ", " << right << endl;
    int pivot = right;
    while (left < right)
    {
        while ( left <= right && nums[left] < nums[pivot] ) ++left;
        while ( left <= right && nums[right] >= nums[pivot] ) --right;
        if ( left < right)
            swap(nums[left], nums[right]);
        else
            break;
    }
    if (left < pivot) swap(nums[left], nums[pivot]);
    cout << left << endl;
    return left;
}

int partit1(vector<int>& nums, int left, int right)
{
    int pivot = right;
}

void quickSort(vector<int>& nums, int left, int right)
{
    if (left >= right) return;

    int pivot = partit(nums, left, right);
    cout << "Partition: nums = [";
    for (auto i : nums)
        cout << i << ", ";
    cout << "]" <<endl;
    quickSort(nums, left, pivot-1);
    quickSort(nums, pivot+1, right);
}

int main()
{
    vector<int> nums = {9, 7, 9, 11, 9, 2, 14, -3, 10, 4, -6};
    cout << "Input: nums = [";
    for (auto i : nums)
        cout << i << ", ";
    cout << "]" <<endl;

    quickSort(nums, 0, nums.size()-1);
    cout << "Output: nums = [";
    for (auto i : nums)
        cout << i << ", ";
    cout << "]" <<endl;
    return 0;
}
