#include<iostream>
using namespace std;
#include<vector>
int main() {
    vector <int> nums = {1,1, 2, 2};
    int n = (nums.size());
    int freq = 0, ans;
    for(int i = 0; i<n; i++) {
        if(freq = 0) {
            ans = nums[i];
        } 
        if(ans = nums[i]) {
            freq++;
        } else {
            freq--;
        }
    }
    cout<<ans;
}