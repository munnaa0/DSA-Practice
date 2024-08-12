#include<iostream>
using namespace std;

void insert(int *p,int n,int key){
    while(key < p[n-1]){
        p[n] = p[n-1];
        n--;
    }
    p[n] = key;
}

int main(){
    int i;
    int Arr[] ={12,18,24,27,31,39,45,67,71};
    int n = sizeof(Arr) / sizeof(int);

    cout << "Before Inserting ";
    for(i=0;i<n;i++)
        cout << Arr[i] << " ";
        cout << endl;

    insert(Arr,n,35);


    cout << "After Inserting ";
    for(i=0;i<n;i++)
        cout << Arr[i] << " ";
        cout << endl;
}