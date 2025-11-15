#include<iostream>
#include <algorithm> 
#include<vector>
using namespace std;
int main() {
    vector <int> vec = {3, 2, 4};
    vector <int> a;
    // for(int x: vec) {

    // }
    // for(int i: a) {
    //     cout<<i<<endl;
    // }
    for(int p = 0; p<3; p++) {
        a.push_back(vec[p]);
        cout<<a[p]<<endl;
    }
    // for(int p = 0; p<3; p++) {
    //     cout<<a[p]<<endl;
    // }
    // std::sort(vec.begin(), vec.end());
    // cout<<vec[0]<<endl<<vec[1]<<endl<<vec[2];

    
    return 0;
}