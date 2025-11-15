#include<iostream>
// #include<string>
#include<algorithm>
using namespace std;

int main() {
    string str = "abc    def";
    reverse(str.begin(), str.end());
    cout<< str;
    //reversing indivisual character 
    // for (int i=0; i<str.length(); i++) {
    //     string part;

    //     if (str[i] == ' ') {
    //         reverse (part.begin(), str.begin()+i);
    //     }
    // }
    return 0;
}