#include<iostream>
using namespace std;

void reverse(int *Arr,int n){
    int Arr2[n];
    int i,j;

    for(i = n-1, j = 0; i>=0; i--,j++){
        Arr2[j] = Arr[i];
    }

    for(i=0;i<n;i++){
        Arr[i] = Arr2[i];
    }
}

int main(){
    int i;
    int Arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(Arr)/sizeof(int);
    

    cout << "Before Reversing: ";
    for(i=0;i<n;i++){
        cout << Arr[i] << " ";
    }
    cout << endl;

    reverse(Arr,n);

    cout << "After Reversing: ";
    for(i=0;i<n;i++){
        cout << Arr[i] << " ";
    }
    cout << endl;

}