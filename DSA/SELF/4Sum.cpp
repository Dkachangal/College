#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>

using namespace std;

int main() {

    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector <vector<int>> ans;
    
    int n = nums.size();
    
    //finding the answer vector
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            for (int k = j+1; k<n; k++) {

                int fourth = target - nums[i] - nums[j] - nums[k];
                //copying elements in unordered set
                unordered_set<int> set;
                for (int x = k+1; x<n; x++) {
                    set.insert(nums[x]);
                }
                if (set.find(fourth) != set.end()) {

                    ans.push_back({nums[i], nums[j], nums[k], fourth});
                }
            }
        }
    }
    // printing answer vector
    if (ans.size() == 0) cout<<"Empty";
    for (int i=0; i<ans.size(); i++) {
        for (int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}