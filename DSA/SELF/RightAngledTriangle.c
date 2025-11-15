#include<stdio.h>
int main() {
    int n = 5;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}