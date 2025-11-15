#include<iostream>
#include<vector>
using namespace std;
int main() {

    std::vector <int> abc;
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;

    cout<<"Enter elemetns: ";
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        abc.push_back(x);
    }
    for (int i=0; i<n; i++) { 
        cout<<abc[i]<<"\t";
    }


    return 0;
}