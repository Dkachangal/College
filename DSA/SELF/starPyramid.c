#include<stdio.h>
int main() {
    int n=5;
    // spave piramid
    // for (int i=n-1; i>0; i--) {
    //     printf(" ");
    // }
    // print space
    for (int i=1; i<=n; i++) {
        for (int space = n-1; space >=i; space--) {
            printf(" ");
        }
        for (int j=1; j<=2*i-1; j++) {
            printf("*");
        }
        // printf("\n");
        printf("\n");
    }


    /*
    i   star
    1-  1
    2-  3
    3-  5
    4-  7
    5-  9
    2*n-1
    */

    // star
    // for (int i=1; i<=n; i++) { //row
    //     for (int j=i; j<=2*i-1; j++) {
    //         printf("*");
    //     }
    //     printf("\n");
    // }


    return 0;
}