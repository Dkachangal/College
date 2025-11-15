#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    int left = 0, right = height.size();

    int maxArea = INT_MIN;

    for (int i = 0; i<9; i++) {
        for (int j=i+1; j<= right-1; j++) {
            maxArea = max(maxArea, (j-i)*height[j]);
        }

    }
    cout<<maxArea;
    return 0;
}