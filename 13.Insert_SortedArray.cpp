#include<iostream>
using namespace std;

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