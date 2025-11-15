#include<iostream>
using namespace std;

int main() {
    int arr[] = {5,4,3,2,1};
    int n = 5;

    for (int i=0; i<n; i++) {
            if (i<n-1) {
                for (int j=i+1; j<n; j++) {
                    if (arr[i] > arr[j]) {
                        int t = arr[i];
                        arr[i] = arr[j];
                        arr[j] = t;
                    }
                }
            }
        }
        for (int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    return 0;
}