#include<stdio.h>
struct Student {
    int rollno;
    char name[100];
};
int main() {
    int s1, s2;
    int *ptr2 = &s2;
    struct Student *ptr1;
    // s1.rollno = 101;
    // s2.rollno = 201;
    // for (int i = 0; i<12; i++) {
    //     scanf(" %c", &s1.name[i]);
    // }
    // for (int i = 0; i<12; i++) {
    //     scanf(" %c", &s2.name[i]);
    // }
    // for (int i = 0; i<12; i++) {
    //     printf("%c", s1.name[i]);
    //     printf("%c", s2.name[i]);
    // }
    return 0;
}
