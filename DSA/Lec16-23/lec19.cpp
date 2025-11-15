#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    std::vector <int> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int end = arr.size() -1 ;
    int mid = 4;
    // to errase from index mid to end'
    auto it = ;
    arr.erase(it, arr.end());
    for (int i = 0; i < arr.size(); i++) {
        std::cout<<arr[i]<<" ";
    }   
    return 0;
}