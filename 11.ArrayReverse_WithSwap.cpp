#include<iostream>
using namespace std;

void Swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int *Arr,int n){
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--){
            Swap(&Arr[i],&Arr[j]);
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