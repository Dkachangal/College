#include<iostream>
#include<unordered_set>
#include<vector>

using namespace std;

int main() {
    unordered_set <int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);

    vector<int> vec;
    vec.push_back(10);
    

    if (s.find(2) != s.end()) {
        cout<<"found";
        // if element is found in the unordered_set, it returns end(), else doesn't .
    }
    return 0;
}