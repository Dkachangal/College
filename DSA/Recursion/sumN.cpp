#include<iostream>
using namespace std;

int sumN (int n) {
    if (n==1) {
        return 1;
    } else {
        return n + sumN(n-1);
    }
}
int main() {
    int n=02;
    cout<<sumN(n);
    return 0;
}