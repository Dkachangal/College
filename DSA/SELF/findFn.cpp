#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main() {
    unordered_set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(1);
    
    vector<int> vec;
    vec.push_back(10);

    // erasing element form unordered_set.
    s.erase(1); 

    if (s.find(1) != s.end()) {
        cout<<"found";
        // if element is found in the unordered_set, it returns end(), else doesn't .
    }
    return 0;
}