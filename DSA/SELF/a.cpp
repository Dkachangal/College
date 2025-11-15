#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>

using namespace std;
int main() {
    vector<pair<char, int>> vecPair;
    multimap<char, int> map;

    // map['a', 1];
    map.emplace('a', 1);
    // map['a'] = 1;

    cout<< "Map elements: "<<endl;
    for (auto it = map.begin(); it != map.end(); it++) {
        cout<< it->first << " " << it->second << endl;
    }

    return 0;
}