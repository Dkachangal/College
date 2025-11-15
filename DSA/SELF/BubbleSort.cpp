#include<iostream>
#include<vector>
using namespace std;

int main() {

    // int n = 5;
    // int arr[5]= {5,4,3,2,1};

    // //bubble sort
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<n-i-1; j++) {
    //         if (arr[i] > arr[j]) {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         } else {
    //             continue;
    //         }
    //     }
    // }
    // for (int i=0; i<n; i++) {
    //     cout<<arr[i]<<"\t";
    // }
    vector <int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums[0]=22;
    nums[1]=23;
    for (int i=0; i<nums.size(); i++) {
        cout<<nums[i]<<"\t";
    }
    return 0;
}