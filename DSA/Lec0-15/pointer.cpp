#include<iostream>
using namespace std;
int sum (int *p1, int *p2) {
    int s = *p1 + *p2;
    return s;
}
int main() {
    // int** ptr = NULL;
    // cout<<ptr;

    // int a = 5;
    // int *p = &a;
    // int **q = &p;

    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<p<<"\t"<<&a<<endl;
    // cout<<*q;

    // int a = 5234;
    // int b = 10;
    // int *p1 = &a;
    // int *p2 = &b;
    // cout<<sum(p1, p2);
    int arr[] = {1, 2, 3, 4, 5};
    cout<<*arr;

    return 0;
}