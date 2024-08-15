#include<iostream>
using namespace std;

void display(int *p,int n){
    for(int i=0;i<n-1;i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

void merge(int *Arr1,int *Arr2,int *Arr3,int Arr3Length){
    int i=0,j=0,k=0;
    while (k<Arr3Length){
        if(Arr1[i] < Arr2[j]){
            Arr3[k] = Arr1[i];
            i++;
            k++;
            Arr3[k] = Arr2[j];
            j++;
            k++;
        }
    }
}

int main(){
    int Arr1[] = {1,3,5,7,9};
    int Arr1Length = sizeof(Arr1) / sizeof(int);

    int Arr2[] = {2,4,6,8,10};
    int Arr2Length = sizeof(Arr2) / sizeof(int);

    int Arr3Length = Arr1Length + Arr2Length;
    int Arr3[Arr3Length];
    int Arr3Size = 0;

    merge(Arr1,Arr2,Arr3,Arr3Length);

    display(Arr3,Arr3Length);

    return 0;
}