#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string removeOccurrences(string s, string part) {
        // string str = s;
        while (s.find(part) < s.length()) {
            int x = s.find(part);
            s.erase(x, part.length());
        }
        return s;
    }
};
int main() {
    Solution obj;
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << obj.removeOccurrences(s, part) << endl;
    return 0;
}