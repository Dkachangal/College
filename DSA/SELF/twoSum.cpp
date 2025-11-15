#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector<int> indices;

    //     std::sort(nums.begin(), nums.end());

    //     for (int i=0; i<nums.size(); i++) {
    //         for (int j=0; j<nums.size(); j++) {
    //             if (i != j) {
    //                 if (nums[i]+nums[j]==target) {
    //                     indices.push_back(i);
    //                     indices.push_back(j);
    //                     return indices;
    //                 }
    //             }
    //         }
    //     }
    //     return indices;
    // }

    vector<int> nums;
    int n, target;
    nums.push_back(2);
    nums.push_back(7);
    nums.push_back(11);
    nums.push_back(15);
    target = 9;
    vector<int> result;
    std::sort(nums.begin(), nums.end());
    int mid;
    mid = nums.size()/2;
    for (int i=0; i<nums.size(); i++) {
        if (nums[mid] + nums[i] == target) {
            result.push_back(mid);
            result.push_back(i);
            // cout<<"Indices are: "<<result[0]<<" and "<<result[1]<<endl;
            break;
        } else if (nums[mid] + nums[i] < target) {
            
        }
    }
    return 0;
}