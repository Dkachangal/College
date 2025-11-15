#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector <int> nums = {1, 2, 6, 9, 9}; // question has sorted array.
    vector<int> ans;
    int tar = 3;

    int low = 0;
    int high = nums.size() -1;

    while (low < high) {
        int currentSum = nums[low] + nums[high];
        if (currentSum == tar) {
            ans.push_back(nums[low]);
            ans.push_back(nums[high]);
        }
        if (currentSum < tar) {
            low++;
        } else {
            high--;
        }
    }
    if (ans.size() == 0) {
        cout<<0;
    }
    for (auto i: ans) {
        cout<< i << " ";
        cout<<endl;
    }



    return 0;
}