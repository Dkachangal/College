#include<stdio.h>
#include<stdlib.h>
struct Poly {
    int coffe;
    int exp;
};

void printPoly (struct Poly* p) {
    printf("%dx^%d", p->coffe, p->exp);
}
int main() {
    struct Poly* p1;
    struct Poly* p2;

    p1 = (struct Poly*) malloc(sizeof(struct Poly));
    p2 = (struct Poly*) malloc(sizeof(struct Poly));

    p1 -> coffe = 5;
    p1 -> exp = 2;
    p2 ->coffe  = 3;
    p2 -> exp = 3;
    printPoly(p1);
    printf("\n");
    printPoly(p2);
    return 0;
    
}