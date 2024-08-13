#include<iostream>
using namespace std;

void display(int *Arr,int length){
    for (int i = 0; i < length; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

void Swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void leftNegative(int *p,int length){
    int i = 0,j = length-1;
    while(i<j){
        while(p[i]<0)
            i++;
        while(p[j]>0)
            j--;
            
    if(i<j)
        Swap(&p[i],&p[j]);
    }
    
}

int main() {

    int Arr[] = {-12, 48, -18, 24, -27, -31, 39, 45, -41 ,67, -71};
    int length = sizeof(Arr)/sizeof(int);

    leftNegative(Arr,length);

   cout << "After Sorting : ";
   display(Arr,length);

    return 0;
}