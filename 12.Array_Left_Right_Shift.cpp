#include<iostream>
using namespace std;

void LeftShift(int *p,int n){
    int i,temp;
    for(i=0;i<n-1;i++){
        p[i] = p[i+1];
    }
    p[n-1] = 0;
}

void RightShift(int *p,int n){
    int i,temp;
    for(i=n-1;i>0;i--){
        p[i] = p[i-1];
    }
    p[0] = 0;
}

int main(){
    int i;
    int Arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(Arr) / sizeof(int);

    cout << "Before Shifting ";
    for(i=0;i<n;i++)
        cout << Arr[i] << " ";
        cout << endl;


    //LeftShift(Arr,n);
    RightShift(Arr,n);

    cout << "After Shifting ";
    for(i=0;i<n;i++)
        cout << Arr[i] << " ";
        cout << endl;
}