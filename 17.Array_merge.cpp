#include<iostream>
using namespace std;

void display(int *p,int n){
    for(int i=0;i<n;i++){
        cout << p[i] << " ";
    }
    cout << endl;
}
//ddd
void merge(int *Arr1,int *Arr2,int *Arr3,int Arr1Length,int Arr2Length){
    int i=0,j=0,k=0;
    while(i<Arr1Length && j<Arr2Length){
        if(Arr1[i] < Arr2[j])
            Arr3[k++] = Arr1[i++];
        else
            Arr3[k++] = Arr2[j++];
    }
    ///For copying last element
    while(i<Arr1Length)
        Arr3[k++] = Arr1[i++];

    while(j<Arr2Length)
        Arr3[k++] = Arr2[j++];
}


int main(){
    int Arr1[] = {1,3,5,7,9};
    int Arr1Length = sizeof(Arr1) / sizeof(int);

    int Arr2[] = {2,4,6,8,10};
    int Arr2Length = sizeof(Arr2) / sizeof(int);

    int Arr3Length = Arr1Length + Arr2Length;
    int Arr3[Arr3Length];

    merge(Arr1,Arr2,Arr3,Arr1Length,Arr2Length);

    display(Arr3,Arr3Length);

    return 0;
}