#include<iostream>
using namespace std;
#include<climits>
#include<vector>
#include<algorithm>

// FUNCTIONS


int sum(int x, int y){
    int a, b;
    int s = x+y;
    return s;
}

int SumN(int n){
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum+=i;
    }
    return sum;
}

int fact(int n){
    int fact =1;
    for(int i = 1; i<=n; i++){
        fact *=i;
    }
    return fact;
}

int digsum(int x){
    int temp;
    int sum = 0;
    while(x>=10){
        temp = x%10;
        sum += temp;
        x = x/10;
    }
    return sum+x;
}

int nCr(int n, int r){
    int nCr = fact(n)/(fact(n-r)*fact(r));
    return nCr;
}

void isprime (int n){
    if(n==1){
        cout<<"The number is neither prime nor composite";
        return;
    }
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"The number is prime";
    }else{
        cout<<"The number is not prime";
    }

}

int isItPRIME (int n){
    // if(n==1){
    //     return;
    // }
    int count = 0;
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }else{
        return 0;
    }
    return 0;
}

int sumprime2to_n(int n){
    int sum = 0;
    for(int i = 2; i<=n; i++){
        if(isItPRIME(i)==1){
            sum += i;
        }
    }
    return sum;
}

void printfibonacci(int n){
    int t1 = 0;
    int t2 = 1;
    int t3;
    cout<<t1<<" "<<t2<<" ";
    for(int i = 0; i<n; i++){
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
        cout<<" "<<t3;
    }


}

int bintodec (int n){
    int ans = 0, pow = 1;
    while(n >0){
        ans = ans + (n%10 * pow);
        n = n/10;
        pow *=2;
    }
    return ans;
}

int digcounter(int n){
    int count = 0;
    while(n > 0){
        n = n/10;
        count++;
    }
    return count;
}

int power(int a, int b){
    // gives a^b
    int ans = 1;
    for(int i = 0; i<b; i++){
        ans = ans * a;
    }
    return ans;
}

int revNo(int n){
    int newnum = 0, pow = 1;
    while(n>0){
        newnum += (n%10)*power(10, digcounter(n));
        pow *= 10;
        n = n/10;
    }
    return newnum/10;

}

int findele(int target, int arr[14]){
    
    for(int i = 0; i<14; i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;
}

int arrsum(int arr[], int sz){
    int sum = 0;
    for(int i = 0; i<sz; i++){
        sum += arr[i];
    }
    return sum;
}

void swapmax_min(int arr[], int sz){
    int max, min, temp;
    for(int i = 0; i<sz; i++){
        if(arr[i] > max){
            max = i;
        }
        if(arr[i] < min){
            min = i;
        }
    }
    temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;


    for(int i = 0; i<sz; i++){
        cout<<arr[i]<<" ";
    }

}

void uniquevalueprinter(int arr[], int sz){
    
    for(int i = 0; i < sz; i++){
        int count = 0;
        for(int j = 0; j<sz; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count == 1){
        cout<<arr[i];
        }

    }
}

void arrintersect(int arr1[], int arr2[], int sz1, int sz2){
    
    for(int i = 0; i<sz1; i++){
        for(int j = 0; j<sz2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i];
            }
        }
    }
}

int vecLinearSearch(vector<int> vec, int val){
    int idx = 0, element;

    for(int element: vec){
        if(element == val){

            return idx;
        }
        idx++;
    }
}

void revVec(vector<int> &mainvec){

    int i = 0, j = (mainvec.size()-1), temp;
    while(i<j){
        temp = mainvec[i];
        mainvec[i] = mainvec[j];
        mainvec[j] = temp;
        i++, j--;
    }
        for(int element: mainvec){
        cout<<element<<" ";
    }
    cout<<endl;

}

double expCalc(double x, int n) {
    int binForm = n;
    double ans = 1;
    if (n<0) {
        x = 1/x;
        binForm = -binForm;
    }

    while (binForm > 0) {

        if (binForm % 2 == 1) {
            ans = ans * x;
            x = x*x;
            binForm = binForm/2;
        } else {
            x = x*x;
            binForm = binForm/2;
        }
    }
    return ans;
    
}

int xpown(int x, int n) {
    int ans = 1;

     while (n > 0) {

        if (n%2==0) {
            x = x*x;
        } else {
            ans = ans * x*(n%2);
            x = x*x; 
        }
       
        n = n/2;
    }
    return ans;
}


int main(){   

{    
        // int a,b;
        // cout<<"divyansh\nkachangal\n";
        // cout<<sizeof(*%^()); error
        // cout<<sizeof(float);
        // cout<<int("A");
        // int age = 0;    
        // cout<<"Enter your age: ";
        // cin>> age;
        // cout<<"Your age is " << age;


        // SUM OF TWO NUIMBERS:
        // int a, b;
        // cout<<"Enter two numbers: ";
        // cin>>a>>b;
        // cout<<"Sum is : " <<(a+b);
        // a = 10;
        // b = --a;
        // cout<<"a: " << a << " b: " << b << endl; // a will be 11, b will be 10
        // float a, b;

        // cout<<"THIS IS A CALCULATOR\n";
        // cout<<"Enter a number : ";
        // cin>>a;
        // cout<<"Enter another number : ";
        // cin>>b;

        // cout<<"Sum is : " << (a+b);

        // cout<<"\nDifference is : " <<(a-b);

        // cout<<"\nProduct is : "<<(a*b);

        // cout<<"\nQuotient is :"<<((int)a/(int)b);

        // cout<<"\nRemainder is : "<<((int)a%(int)b);
        // int a;
        // cout<<"Enter a number : ";
        // cin>>a;
        // if(a%2==0){
        //     cout<<"The number is even";
        // }else{
        //     cout<<"The number is odd";
        // }


        // TO CHECK IF CHARACTER IS UPPERCASE OR LOWERCASE
        // char x;
        // cout<<"Enter a letter: ";
        // cin>>x;
        // x = (int)x;
        // if(x>=65 && x<=90){
        //     cout<<"UPPER CASE";
        // }else if(x>=97 && x<=122){
        //     cout<<"lower case";
        // }

        // REVISE
        // char x;
        // cout<<"Enter a letter: ";
        // cin>>x;
        // x = (int)x;
        // if(x>=65 && x<=90){
        //     cout<<"Upper Case";
        // }else if(x>=97 && x<=122){
        //     cout<<"lower case";
        // }
        // int n = 0;
        // while(true){
        //     cout<<n<<"\n";
        //     n++;
        // }

        // int a = 0;
        // for(int i=0; i<=10; i=i+2){
        //     cout<<a<<" ";
        //     // i++;
        // }
        // SUM OF NUMBERS FROM 1 TO N
        // int n, sum = 0;
        // int i = 0;
        // cout<<"Enter a number: ";
        // cin>>n;
        // for(int i=0; i<=n; i++){
        //     sum = sum+i;

        // }
        // cout<<"The sum is : "<<sum;
        // USING WHILE LOOP
        // while(i<=n){
        //     sum = sum +i;
        //     i++;
        // }
        // cout<<sum;

        // SUM OF ALL ODD NUMBERS FROM 1 TO N
        // int n, sum =0;
        // cout<<"Enter a number: ";
        // cin>>n;
        // for(int i=1; i<=n; i+=2){
        //     sum +=i;
        // }
        // int i = 0;
        // while(i<=n){
        //     sum+=i;
        //     i+=2;
        // }
        // cout<<"The sum is: "<<sum;
        // TO CHECK IF A NUMBER IS PRIME OR NOT
        // int n, count;
        // cout<<"Enter a number : ";
        // cin>>n;
        // count =0;
        // for(int i=1; i<=n; i++){
        //     if(n%i==0){
        //         count++;
        //     }
        // }
        // if(count==2){
        //     cout<<"The number is prime";
        // }else{
        //     cout<<"The number is not prime";
        // }

        // int n;
        // cout<<"Enter a number: ";
        // cin>>n;
        // for(int i=n; i>=1; i--){
        //     for(int j=1; j<=i; j++){
        //         cout<<"*";
        //     }
        //     cout<<endl;
        // }
        // int n, j;
        // cout<<"Enter a number: ";
        // cin>>n;
        // for(int i=1; i<=n; i++){
        //     for(j=1; j<=n; j++){
        //         cout<<"*  ";
        //     }
        //     cout<<endl;
        // }
        // j = 3;
        // cout<<j;
    
        // SUM OF  NUMBERS DIVISIBLE BY 3 FROM 1 TO N

        // int n, sum;
        // sum = 0;
        // cout<<"Enter a number: ";
        // cin>>n;
        // for(int i=n; i>=3; i--){
        //     if(i%3==0){
        //         sum+=i;
        //     }
        // }
        // cout<<"The sum of numbers from 1 to n divisible by 3 is: "<<sum;

        // FACTORIAL OF A NUMBER
        // int n;
        // int fact=1;
        // cout<<"Enter a number: ";
        // cin>>n;
        // for(int i=n; i>1; i--){
        //     fact *=i;
        // }
        // cout<<"The factorial of "<<n<<" is: "<<fact;
        // char n;
        // cout<<"Enter your name: ";
        // cin>>n;
        // cout<<"The number you entered is :"<<n;
        // getchar();
        // char n = 'A';
        // for(int i =1; i<=n; i++){
        //     for(int j=1; j<=n; j++){
        //         cout<<j;
        //     }
        //     cout<<"\n";
        // }
        // int n;
        // cout<<"Enter number : ";
        // cin>>n;
        // for(int i =1; i<=n; i++){
        //     char x = 65;
        //     for(int j = 1; j<=n; j++){
        //         cout<<x<<" ";
        //         x++;
        //     }
        //     cout<<endl;
        // }
        // int n = 8;
        // cout<<"Enter the value of n: ";
        // cin>>n;
        // for(int i = 1; i<=n*n; i++){
        //     cout<<i<<" ";;
        //     if(i%n==0){
        //         cout<<endl;
        //     }
        // }
        // char ch = 'A';
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         cout<<ch<<" ";
        //         ch++;
        //     }
        //     cout<<endl;
        // }
        // int n = 9;
        // for(int i=1; i<=n; i++){
        //     for(int j=n; j>=i; j--){
        //         cout<<"* ";
        //     }
        //     cout<<endl;
        // }
        // int num = 1;
        // int n = 4;
        // for(int i=0; i<n; i++){
        //     for(int j = 0; j<i+1; j++){
        //         cout<<i+1;
        //     }
        //     cout<<endl;
        //     // num++;
        // }
        // int n = 2;
        // char ch = 'A';
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<i+1; j++){
        //         cout<<ch;
        //     }
        //     ch++;
        //     cout<<endl;
        // }
        // int n=1;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<(i+1); j++){
        //         cout<<j+1<<" ";
        //     }
        //     cout<<"\n";
        // }
        // int n = 9;
        // for(int i=1; i<=n; i++){
        //     for(int j = i; j>=1; j--){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;

        // }
        // int n = 4;
        // int num = 1;
        // for(int i =0; i<n; i++){
        //     for(int j=1; j<=i; j++){
        //         cout<<num<<" ";
        //         num++;
        //     }
        //     cout<<endl;
        // }


        // char ch = 'A';
        // int n = 4;
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<=i; j++){
        //         cout<<ch;
        //         ch++;
        //     }
        //     cout<<endl;
        // }

        // int n = 8;
        // for(int i=1; i<=n; i++){
        //     for(int p = 0; p<i-1; p++){
        //         cout<<" ";
        //     }
        //     for(int j = n; j>=i; j--){
        //         cout<<i;
        //     }
        //     cout<<endl;
        // }
        // int n = 4;
        // char ch = 'A';
        // for(int i =0; i<n; i++){
        //     // spaces
        //     for(int j=0; j<i; j++){
        //         cout<<" ";
        //     }
        //     for(int j = n; j>i; j--){
        //         cout<<ch<<" ";
        //     }
        //     ch++;
        //     cout<<endl;
        // }

        // int n = 8; 
        // for(int i=1; i<=n; i++){
        //     //left space:
        //     for(int j = n-1; j>=i; j--){
        //         cout<<"  ";
        //     }
        //     //elements:
        //     for(int j = 1; j<=i; j++){
        //         cout<<j<<" ";
        //         if(j==i){
        //             for(int p = i-1; p>=1; p--){
        //                 cout<<p<<" ";
        //             }
        //         }
        //     }
        //     cout<<endl;
        // }
        // cout<<"hello";

        // int n =4;
        // for(int i=0; i<n; i++){
        //     for(int j = i; j<n-1; j++){
        //         cout<<"*";
        //     }
        //     cout<<endl;
        // }



        // int n = 4;
        // int p = 1;
        // for(int i = 0; i<n; i++){
        //     // SPACES:
        //     for(int j = 1; j<n-i; j++){
        //         cout<<" ";
        //     }
        //     cout<<"*";//UPPER LEFT STAR ROW
        //     for(p = 1; p<=2*i-1; p++){
        //         cout<<" ";
        //     }
        //     if(p != 1){
        //         cout<<"*";//UPPER RIGHT STAR ROW

        //     }
        //     cout<<endl; //LOWER HALF STARTS HERE
        // }
        // int q;
        // // LOWER SERIES
        // for(int i = 0; i<n; i++){

        //     // LOWER LEFT SPACES:
        //     for(int q = 1; q<i; q++){
        //         cout<<" ";
        //     }
        //     if(q != 1){
        //         cout<<"*";

        //     }
        //     cout<<endl;

        // }

        //UPPER HALF
        // int n = 4;
        // for(int i = 0; i<n; i++){

        //     // LEFT TRIANGLE

        // }
        // cout<<"hello world";
        // int x = 4;
        // int y = 6;
        // cout<<sum(x, y);


    // int n = 4;
    // cout<<"The sum of numbers from 1 to N is : "<<SumN(n)<<endl;
    
    // cout<<"The sum of numbers from 1 to N is : "<<SumN(8);

    // cout<<"The factorial of 5 is : "<<fact(0);

    // int n = 145;
    // cout<<"The sum of digits of "<< n  <<" is "<<digsum(n);
    
    // int n = 8;
    // int r = 2;
    // cout<<"The value of "<<n<<"C"<<r<<"is : "<<nCr(n, r);
    
    // int n = 1;
    // isprime(n);
    // int n = 19;
    // cout<<"the sum of prime numbers from 1 to "<<n<<"is : "<<sumprime2to_n(n);
    

    // int n = 15;
    // printfibonacci(n);
    
    
    
    // int num = 1290,  ans=0, rem;
    // int pow = 1;
    // while(num > 0){
    //     rem = num%2;
    //     num = num/2;
    //     ans = ans + rem*pow;
    //     pow = pow*10;
        
    // } 
    // cout<<ans<<endl;
    // int n = 10110;
    // cout<<bintodec(n);


    
    
    // int a = 4;
    // int b = 8;
    // cout<<(a&b);

    // int a = 4;
    // int b = 8;
    // cout<<(a^b);
    // unsigned int a = -13;
    // cout<<a;
    
    // as a<<b = a * 2^b=>
    // int a;
    // cout<<"Enter a number : ";
    // cin>>a;
    // if(((a<<1)/a) == 2){
    //     cout<<"The number is a power of 2";
    // }else{
    //     cout<<"The number is not a power of 2";
    // }
    // int a = 125340000;
    // int x = 10;
    // int y = 3;
    // cout<<endl<<power(x, y)<<endl;
    // cout<<revNo(a);
    // cout<<"\n"<<digcounter(a)

    // int arr[5] = {4,2,56,1,6};
    // int a = INT_MAX;
    // int b = INT_MIN;

    // for(int i = 0; i<5; i++){
    //     if(arr[i] > b){
    //         b = arr[i];
    //     }
    // }
    // cout<<b<<endl;
    // for(int n = 0; n< 5; n++){
    //     if(arr[n]==b){
    //         cout<<n;
    //         }
    // }
    //     int a = INT_MAX;
    // cout<<a<<endl;
//     for(int i = 0; i<5; i++){
//         if(arr[i] < a){
//             a = arr[i];
//         }
//     }
// for(int i = 0; i<5; i++){
//     a = min(arr[i], a);
// }

//     cout<<a;
    // for(int i = 0; i<5; i++){
    //     if(arr[i]> b){
    //         b = arr[i];
    //     }
    // }
    // cout<<b; 
    
    // for(int i = 0; i<5; i++){
    //     if(arr[i] < a){
    //         a = arr[i];
    //     }
    // }
    // cout<<i;
    // // cout<<endl<<a;
    // for(int i = 0; i<5; i++){
    //     if(a == arr[i]){
    //         cout<<i;
    //         break;
    //     }
    // }
    // int target = 99, arr[] = {2,34, 234,234,12,54,6,2,3,5,12,53,3};
    // int size = sizeof(arr)/sizeof(int);
    // cout<<findele(target, arr);
    // cout<<(sizeof(arr)/(sizeof(int)));
    // int arr[7] = {1, 4, 5, 9, 2, 8, 16};
    // int 7 = sizeof(arr)/sizeof(int);    
    // int newarr[sizeof(arr)/sizeof(int)];
    // int newarr[7];
    // for(int i = 6, int j = 0; i>=0, j <7; i--, j++){
    //     newarr[j] == arr[i];
    // }
    // for(int i = 0; i<7; i++){
    //     cout<<newarr[i];
    // }
    // int a = 2, b = 5;
    // swap(a, b);
    // cout<<a<<endl<<b;
    // int arr[]={1,2,3, 2,4, 1, 5,6,7, 9, 9.1};
    // int sz = sizeof(arr)/sizeof(int);
    // uniquevalueprinter(arr, sz);
    // int arr1[] = {1, 2, 3, 4, 5, 6, 7, 32, 23};
    // int arr2[] = {1, 2, 3, 7, 9, 19, 32};
    // arrintersect(arr1, arr2, 7, 6);
    
    // vector<int> vec = {1, 2, 3, 4};
    // int size = sizeof(vec)/sizeof(int);
    // for(int i = 0; i<size; i++){
    //     cout<<vec[i];
    // }


    // vec.pop_back();

    // for(int i: vec){
    //     cout<<i<<"\t";
    // }
    // int x = vec.front();
    // cout<<endl<<vec.front();

    
    // LINEAR SEARCH ON VECTOR
    // cout<<"The element's index is : "<< vecLinearSearch(vec, 1);}
    // int size = vec.size();
    // cout<<size;
    // vector <int> vec = {1, 2, 3, 4, 5, 8};

    // revVec(vec);
    // for(int element: vec){
    //     cout<<element<<" ";
    // }
    // cout<<endl;
    // cout<<(1%2);
    // cout<<(25/2);
    

    // int n = 5;
    // int start = 0;

    // int n= 121;
    // cout<<isPalindrome(n);
    
    
    // KADANE'S ALGO:
    // int maxSum = INT_MIN, currentSum = 0;
    // for(int i = 0; i<n; i++) {
        //     currentSum += arr[i];
        //     maxSum = max(maxSum, currentSum);
    //     if(currentSum<0){
        //         currentSum = 0;
        //         }
        // }
        // cout<<maxSum;
        
        // vector <int> ansarray;
        // int n = nums.size();





    // vector <int> ansarray = {1,2,  32 , 234};
    // int n = ansarray.size();
    // cout<<n;
    // int a = 1, b = 10;
    // cout<<a%b;
    // int nums[] = {2, -3, -1, 4, 5};

    // int n = 5;
    // int start = 0, end = 1;
    // int sum = 9;

    // for(start = 0; start<n; start++) {

    //     for(int end = start+1; end<n; end++) {

    //         if(nums[start] + nums[end] == sum) {

    //             ansarray.push_back(start);
    //             ansarray.push_back(end);
    //             break;
    //             // cout<<"hi";
    //         }
    //     }
    // }
    // cout<<ansarray[0]<<" "<<ansarray[1];

    // cout<<endl<<"Hello world";

    
    // int target = 6;
    // vector <int> ans; 
    
    // // vector <int> ans;
    //     int j;
    //     int x;
    //     for(int i = 0; i<nums.size(); i++) {
        //         j = nums.size()-1;
        //         x = target - nums[i];
        
        //         if(i!=j) {
            //             if(nums[j] == x) {
                //             // ans.push_back(i);
                //             // ans.push_back(j);
                //             cout<<i;
                //             cout<<"hello";
                //             cout<<j;
                //             // return ans;
                //         }
                //         }
                
    //         j--;
    //     }
    //     // }
    //     // for(int i = 0; i<ans.size(); i++) {
        //     //     cout<<ans[i];
    //     // }
    // vector <int> nums = {3, 2, 4};

    // nums.push_back(9);
    // for(int i: nums) {
    //     cout<<i;
    // }

    
    
    
    // int n = prices.size();
    // int lhsMin = INT_MAX;
    // int rhsMax = INT_MIN;
    // int ans = 4;
    // // int a, b, c;
    // for(int i = 0; i<n/2; i++) {
        //     lhsMin = std::min(lhsMin, prices[i]);
        // }
        
        // for(int i = n/2; i<n; i++) {
            //     rhsMax = std::max(rhsMax, prices[i]);
            // }
            
            // if(n%2 == 0) {
                //     //even n
    //     ans = rhsMax-lhsMin;
    // }
    
    // else {
        //     //odd n
        //     if (prices[n/2] - lhsMin>rhsMax - prices[n/2]) {
            //         if (prices[n/2] - lhsMin>rhsMax - lhsMin) {
                //             ans = prices[n/2] - lhsMin;
                //         } else {
                    //             ans = rhsMax - lhsMin;
                    //         }
                    //     }
                    //     if (prices[n/2] - lhsMin<rhsMax - prices[n/2]) {
                        //         if (rhsMax - prices[n/2]>rhsMax - lhsMin) {
                            //             ans = rhsMax - prices[n/2];
                            //         } else {
                                //             ans = rhsMax - lhsMin;
                                //         }
                                //     }
                                // }
                                // cout<<ans;
                                
                                // int smallest = INT_MAX;
        // vector <int> prices = {7, 1, 3, 5, 6, 4};
        // int n = prices.size();
        // int bestBuy = prices[0];
        // int maxProfit = 0;
        // for (int i = 1; i<n; i++) {
        //     if (prices[i] > bestBuy) {
        //         maxProfit = std::max(maxProfit, prices[i] - bestBuy);
        //     }

        //     bestBuy = std::min(bestBuy, prices[i]);
            
        // }
        // cout<<maxProfit;

    // exponent question
    
    
    
    // double a = -1;
    // int b = -1;
    // cout<<expCalc(a, b);
    // X ^ n
    
    // 5 --> 101
    // x ^ 101 --> 
    
    // int x, n;
    // int ans = 1;
    // cout<<"Enter the value of x: "<<endl;
    // cin>>x;
    // cout<<"Enter the value of n: "<<endl;
    // cin>>n;
    // int bin = n;
    // while (bin > 0) {

    //     if (bin%2==0) {
    //         x = x*x;
    //     } else {
    //         ans = ans * x*(bin%2);
    //         x = x*x; 
    //     }
       
    //     bin = bin/2;
    // }

    // cout<<endl<<ans;

}  

    int num = 103;
    int pow = 0;
    int a = xpown(num, pow);
    cout<<a;
    return 0;
}