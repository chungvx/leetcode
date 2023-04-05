#include<vector>
#include<iostream>
using namespace std;


// C1
int search(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1;
    while (l < r){
        int mid = l + (r - l)/2;
        if (nums[mid] >= target){
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    if (nums[l] == target) return l;
    return -1;
}


// C2
int binarySearch(vector<int> &nums, int l, int r, int target)
{
    if (l > r) return -1;
    int mid = (l + r) / 2;
    if (nums[mid] == target) return mid;
    if (target > nums[mid]) return binarySearch(nums, l + 1, r, target);
    else return binarySearch(nums, l, r-1, target);
}

int search2(vector<int> &nums, int target)
{
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main()
{
    vector<int> test1 = {-1,0,3,5,9,12};
    int target1 = 9;
    int output1 = 4;
    cout << "test1: " << (output1 == search(test1, target1)) << endl;
    cout << "test1: " << (output1 == search2(test1, target1)) << endl;
}