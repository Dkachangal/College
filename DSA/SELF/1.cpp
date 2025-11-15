#include<iostream>
using namespace std;
int main() {
    int a, b, c;

    cout<<"THIS IS THE CALCULATOR APP: \n";
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"\n"<<"Enter another number: ";
    cin>>b;
    cout<<"\n"<<"Enter third number: ";
    cin>>c;

    cout<<"The sum is : "<<a+b+c<<"\n";
    cout<<"The average is: "<<(a+b+c)/3<<"\n";
    cout<<"The difference is: "<<(a-b-c)<<"\n";
    cout<<"The product is: "<<(a*b*c)<<"\n";

    return 0;
}