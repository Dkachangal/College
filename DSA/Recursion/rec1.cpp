#include<iostream>
using namespace std;

void printN (int n) {
    if (n==0) {
        return;
    } else {
        cout<<n--<<" ";
        printN(n);
    }


}
int main() {
    printN(5);
    return 0;
}