#include<iostream>
using namespace std;

int main() {
    //binary search
    int arr[10] = {-1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int start, end, ele;
    int n = sizeof(arr)/sizeof(int);
    int mid;

    cout<<"Enter the element to search : \n";
    cin>>ele;

    start = 0;
    end = n-1;

    while(start <= end) {
        
        mid = (start + end)/2;
        if (ele > arr[mid]) {
            start = mid + 1;
        } else if (ele < arr[mid]) {
            end = mid -1;
        } else if (ele == arr[mid]) {
            cout<<mid<<"is the index required.\n"<<endl;
            cout<<arr[mid];

            break;
        }
    }
    if (start > end) {
        cout<<"Element not found.\n";
    }

    
    return 0;
}