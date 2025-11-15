#include<stdio.h>
int main() {

    /*
    i   space
    1---0
    2---1
    3---2
    4---3
    5---4
    */
   /*
   i  star
// n=5
   1  9
   2  7
   3  5
   4  3
   5  1
   */
    int n=5;
    for (int i=1; i<=n; i++) {
        // space
        for (int j=1; j<i; j++) {
            printf(" ");
        }
        // star
        for (int star=2*n-1-i; star>3; star--) {
            printf(" *");
        }
        printf("\n");
    }
}