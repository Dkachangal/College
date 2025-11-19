#include<iostream>
using namespace std;

int nFact (int n) {
    int fact = 1;
    if (n==0) {
        return 1;
    }
    if (n==1) {
        return fact;
    }else {
        fact = n*nFact(n-1);
    }
    return fact;
}
int main() {
    int n = 80;
    cout<<nFact(n);
    return 0;

}