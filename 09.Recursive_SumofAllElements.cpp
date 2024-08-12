#include<iostream>
using namespace std;

int sum(int A[],int n){
    if(n<0)
        return 0;
    else
        return sum(A,n-1) + A[n];
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);

    int result = sum(arr,n-1);
    cout << "Sum of all elements is " << result << endl;
}