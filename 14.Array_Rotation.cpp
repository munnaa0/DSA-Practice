#include<iostream>
using namespace std;

void LeftRotate(int *p,int n){
    int i,temp = p[0];
    for(i=0;i<n-1;i++){
        p[i] = p[i+1];
    }
    p[n-1] = temp;
}

void RightRotate(int *p,int n){
    int i,temp = p[n-1];
    for(i=n-1;i>0;i--){
        p[i] = p[i-1];
    }
    p[0] = temp;
}

int main(){
    int i;
    int Arr[10] ={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(Arr) / sizeof(int);

    cout << "Before Rotating ";
    for(i=0;i<n;i++)
        cout << Arr[i] << " ";
        cout << endl;


    //LeftRotate(Arr,n);
    //RightRotate(Arr,n);

    cout << "After Rotating ";
    for(i=0;i<n;i++)
        cout << Arr[i] << " ";
        cout << endl;
}