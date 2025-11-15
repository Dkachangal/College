#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main() {
    // vector < pair <int, int>> vec = { {1, 2}, {3, 4}, {5, 5}, {3, 1}};
    // vec.push_back({1, 4});
    // vec.pop_back();
    // int a = vec[1].first;
    // int p;
    // for (pair<int, int> p : vec) {
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // pair <int, int> x = {1, 2};
    // cout<<x.first;
    // cout<<a;

    // queue <int> a;
    // a.push(1);
    // a.push(2);
    // cout<<a.front();
    // a.pop();
    // cout<<endl<<a.front();
    // a.pop();
    // if (a.empty() == 1) {
    //     cout<<"empty";
    // } else {
    //     cout<<"not empty";
    // }

    priority_queue<int> queue;
    queue.pop();
    queue.push(1);
    queue.push(3);
    cout<<queue.top();

    return 0;
}